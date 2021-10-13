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
	
	struct etudiant etudi;
	strcpy(etudi.Prenom,"Charlie");
	strcpy(etudi.Nom,"Dupont");
	strcpy(etudi.Adresse,"rue de Dieu");	
	strcpy(etudi.Note1,"18");
	strcpy(etudi.Note2,"16");
	
	printf("%s ", etudi.Prenom);
	printf("%s ", etudi.Nom);
	printf("%s ", etudi.Adresse);
	printf("%s ", etudi.Note1);
	printf("%s ", etudi.Note2);
	printf("\n");
	return 0 ;
}
