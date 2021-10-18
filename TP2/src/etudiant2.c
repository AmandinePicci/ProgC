/* TP2, Le Corre Sarah, Piccinali Amandine
Exercice 2.6
Afficher les notes de 5 étudiants avec struct*/


# include <stdio.h>
# include <string.h>

int main() {

	struct etudiant{
		char Nom[30];
		char Prenom[30];
		char Adresse[30];
		char Note1[30];
		char Note2[30];
	};
	
	struct etudiant etudi [2];
	strcpy(etudi[0].Prenom,"Charlie");
	strcpy(etudi[0].Nom,"Dupont");
	strcpy(etudi[0].Adresse,"rue de Dieu");	
	strcpy(etudi[0].Note1,"18");
	strcpy(etudi[0].Note2,"16");
	
	strcpy(etudi[1].Prenom,"Antoine");
	strcpy(etudi[1].Nom,"Smith");
	strcpy(etudi[1].Adresse,"rue du Parc");	
	strcpy(etudi[1].Note1,"4");
	strcpy(etudi[1].Note2,"2");

	for (int i=0; i<2; i+=1){
		printf("Prénom : %s \n", etudi[i].Prenom);
		printf("Nom : %s \n", etudi[i].Nom);
		printf("Adresse : %s \n", etudi[i].Adresse);
		printf("Note 1 : %s \n", etudi[i].Note1);
		printf("Note 2 : %s \n", etudi[i].Note2);
		printf("\n\n");
	}
	return 0 ;
}
