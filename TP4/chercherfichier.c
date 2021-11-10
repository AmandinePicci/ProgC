/* 
*TP4, exercice 4.6
*Auteurs : Sarah LE CORRE, Amandine PICCINALI
* Objectifs : Chercher une phrase saisie par l'utilisateur dans un fichier
*/

// Importation bibliothèques

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include "fichier.h"

int main() {

	// Initialisation variables

    int ligne = 1;
    int cmp = 0;
	int taille = 300;
	char *recherche;

    char *nom_fich = (char *) malloc(50);	//malloc :Allocation de mémoire pour le nom du fichier (demande allocation mémoire dynamique) 
    
	printf("Entrez le nom du fichier :");
    scanf("%s",nom_fich);			// demande à l'utilisateur de taper le nom du fichier

	char *mot = (char *) malloc(50);		//malloc :Allocation de mémoire pour le mot recherché (demande allocation mémoire dynamique) 
    printf("Mot recherché :");
    scanf("%s",mot);				// demande à l'utilisateur de taper le mot recherché


    char *chaine_ligne = (char *) malloc(sizeof(char)*taille);	//malloc :Allocation de mémoire pour chaine dans la ligne (demande allocation mémoire dynamique) 

	FILE *fd;
	fd = fopen (nom_fich, "r");					// ouverture fichier tkt


	while(fgets(chaine_ligne, taille, fd) != NULL){
		recherche = strstr(chaine_ligne,mot);	// strstr permet de chercher une chaine de caractère dans une autre
		
		if (recherche != NULL){
			cmp++;
			
			printf("Ligne %d, %d fois\n",ligne,cmp);			
		}
		ligne++;
	}
	fclose(fd);	// Fermeture fichier txt

	/*free(nom_fich);	//libération de mémoire ne fonctionne pas, erreur munmap_chunk()
	free(mot);
	free(chaine_ligne);*/

return 0;

}
