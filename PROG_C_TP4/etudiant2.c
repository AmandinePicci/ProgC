/* Fichier : etudiant2.c
*TP2, exercice 2.6
*Gérez les notes de 5 étudiants, avec struct
*Auteur : Alice MALOSSE & André CELLA-STEIBEL
*/

#include <stdio.h>
#include <string.h>

int main() {

  struct etudiant{
		char nom[30];
		char prenom[30];
		char adress[30];
		short notesprog, notessyst;
	};

	struct etudiant aluno[5];

	strcpy(aluno[0].nom, "Dupont");
	strcpy(aluno[0].prenom, "Pierre");
	strcpy(aluno[0].adress, "Lyon");
	aluno[0].notesprog=17;
	aluno[0].notessyst=16;

	strcpy(aluno[1].nom, "Steibel");
	strcpy(aluno[1].prenom, "Andre");
	strcpy(aluno[1].adress, "Villeurbanne");
	aluno[1].notesprog=20;
	aluno[1].notessyst=20;

	strcpy(aluno[2].nom, "Smith");
	strcpy(aluno[2].prenom, "Bob");
	strcpy(aluno[2].adress, "Paris");
	aluno[2].notesprog=8;
	aluno[2].notessyst=3;

	strcpy(aluno[3].nom, "Aucune");
	strcpy(aluno[3].prenom, "Idee");
	strcpy(aluno[3].adress, "Bordeaux");
	aluno[3].notesprog=10;
	aluno[3].notessyst=12;

	strcpy(aluno[4].nom, "Santos");
	strcpy(aluno[4].prenom, "Lucas");
	strcpy(aluno[4].adress, "Toulouse");
	aluno[4].notesprog=16;
	aluno[4].notessyst=7;

	for(int i=0;i<5;i++){
		printf("\nNom: %s",aluno[i].nom);
		printf("\nPrenom: %s",aluno[i].prenom);
		printf("\nAdress: %s",aluno[i].adress);
		printf("\nNote Programmation C: %u",aluno[i].notesprog);
		printf("\nNote Systeme d'exploitation: %u\n",aluno[i].notessyst);
		printf("\n");
	}

return 0;
}
