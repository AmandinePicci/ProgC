/* TP2 _ Le Corre Sarah, Piccinali Amandine
Exercice 2.5
Gérer les notes de 5 étudiants avec des tableaux*/


# include <stdio.h>

int main() {

	//Initialisation et déclaration du tableau
	char tabetu[5][5][30]= {
	{"Etienne","Faucher","rue de Dieu","18","14"},
	{"Sarah","Le Corre", "rue du Paradis", "20", "21"},
	{"Rodriguo","Delaplaine","rue du roi","7","3"},
	{"Lebrac","Dupont","rue Auguste Le petit","15","9"},
	{"James","Smith","rue Legrand","2","4"},
	}
	;

	//Variables pour l'affichage
	int i;
	int j;
	

	//Affichage
	for (i=0 ; i<5 ; i+=1){
		printf("\n");
		for (j=0 ; j<5 ; j+=1){
			printf("%s ",tabetu[i][j]);
		}
	}
	printf("\n");



	return 0 ;
}
