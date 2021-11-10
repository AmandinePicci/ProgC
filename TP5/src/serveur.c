/*
 * SPDX-FileCopyrightText: 2021 John Samuel
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* TP5
Piccinali Amandine et Le Corre Sarah
Exercice 5.4
Exercice 5.5
Renvoyer un message du serveur au client.
Effectuer un calcul dans le serveur dont l'opérateur et les nombres ont été envoyé par le client.
*/


#include <sys/types.h> 
#include <sys/socket.h>
#include <sys/epoll.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "serveur.h"

/* renvoyer un message (*data) au client (client_socket_fd)
 */
int renvoie_message(int client_socket_fd, char *data) {

  int data_size = write (client_socket_fd, (void *) data, strlen(data));
      
  if (data_size < 0) {
    perror("erreur ecriture");
    return(EXIT_FAILURE);
  }
}

/* accepter la nouvelle connection d'un client et lire les données
 * envoyées par le client. Ensuite, le serveur envoie un message
 * en retour
 */
int recois_envoie_message(int socketfd) {
  struct sockaddr_in client_addr;
  char data[1024];

  int client_addr_len = sizeof(client_addr);
 
  // nouvelle connection de client
  int client_socket_fd = accept(socketfd, (struct sockaddr *) &client_addr, &client_addr_len);
  if (client_socket_fd < 0 ) {
    perror("accept");
    return(EXIT_FAILURE);
  }

  // la réinitialisation de l'ensemble des données
  memset(data, 0, sizeof(data));

  //lecture de données envoyées par un client
  int data_size = read (client_socket_fd, (void *) data, sizeof(data));
      
  if (data_size < 0) {
    perror("erreur lecture");
    return(EXIT_FAILURE);
  }
  
  /*
   * extraire le code des données envoyées par le client. 
   * Les données envoyées par le client peuvent commencer par le mot "message :" ou un autre mot.
   */
  printf ("Message recu: %s\n", data);
  char code[10];
  sscanf(data, "%s:", code);

//--------------------------------------------------------------------------
  /* Exercice 5.4 :
  Objectif : Modifier la fonction recois_envoie_message du serveur pour 
	que l'utilisateur puisse envoyer un message lorsqu'il en a reçu un
	du client.*/  
 
  /*char message[100];
  printf("Votre message (max 1000 caracteres): ");
  fgets(message, 1024, stdin);
  strcpy(data, "message: ");
  strcat(data, message);*/
//---------------------------------------------------------------------------

  //Si le message commence par le mot: 'message:' 
  if (strcmp(code, "message:") == 0) {
    renvoie_message(client_socket_fd, data);
  }
  if (strcmp(code, "calcule:") == 0) {
    recois_numeros_calcule(client_socket_fd,data);
  }

  //fermer le socket 
  close(socketfd);
}

//---------------------------------------------------------------------------

int recois_numeros_calcule(int client_socket_fd, char* data) {
	char str_calcule[10];
	char op[1];
	char num_1[10];
	char num_2[10];
	int resultat ;
	char resultat_final[10];

	sscanf(data, "%s %s %s %s ",str_calcule,op,num_1,num_2); //Récuparation des nombres et de l'opérateur
	//Conversion des nombres en entier
	int num1;
	int num2;
	num1 = atoi(num_1);
	num2 = atoi(num_2);
	
	switch(*op){ //On fait un switch pour changer de cas selon l'opérateur
		case'+': printf("num1 + num2 = %d \n", num1+num2); 
						resultat = num1+num2;
		break;

		case'-': printf("num1 - num2 = %d \n", num1-num2);
						resultat = num1-num2;
		break;

		case'*': printf("num1 * num2 = %d \n", num1*num2);
						resultat = num1*num2;
		break;

		case'/': printf("num1 / num2 = %d \n", num1/num2);
						resultat = num1/num2;
		break;

		case'%': printf("reste division de num1 par num2 = %d \n", num1%num2);
						resultat = num1%num2;
		break;


}

	sprintf(resultat_final, "%d", resultat);//conversion en chaine de caractere 

  // la réinitialisation de l'ensemble des données
  memset(data, 0, sizeof(data));
	
	strcpy(data, "calcule: ");// on met l'en-tete "calcule :"
	strcat(data, resultat_final);
	
	  printf("0 %s \n",data);/**************/

  int data_size = write (client_socket_fd, data, strlen(data));
	//fin de la modification      
  if (data_size < 0) {
    perror("erreur ecriture");
    return(EXIT_FAILURE);
  }
 
}


int main() {

  int socketfd;
  int bind_status;
  int client_addr_len;

  struct sockaddr_in server_addr, client_addr;

  /*
   * Creation d'une socket
   */
  socketfd = socket(AF_INET, SOCK_STREAM, 0);
  if ( socketfd < 0 ) {
    perror("Unable to open a socket");
    return -1;
  }

  int option = 1;
  setsockopt(socketfd, SOL_SOCKET, SO_REUSEADDR, &option, sizeof(option));

  //détails du serveur (adresse et port)
  memset(&server_addr, 0, sizeof(server_addr));
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(PORT);
  server_addr.sin_addr.s_addr = INADDR_ANY;

  // Relier l'adresse à la socket
  bind_status = bind(socketfd, (struct sockaddr *) &server_addr, sizeof(server_addr));
  if (bind_status < 0 ) {
    perror("bind");
    return(EXIT_FAILURE);
  }
 
  // Écouter les messages envoyés par le client
  listen(socketfd, 10);

  //Lire et répondre au client
  
	recois_envoie_message(socketfd);   

  return 0;
}
