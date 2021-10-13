# include <stdio.h>

int main() {
	char tabetu[5][5][30]= {
	{"Etienne","Faucher","rue de Dieu","18","14"},
	{"Sarah","Le Corre", "rue du Paradis", "20", "21"},
	{"Rodriguo","Delaplaine","rue du roi","7","3"},
	{"Lebrac","Dupont","rue Auguste Le petit","15","9"},
	{"James","Smith","rue Legrand","2","4"},
	}
	;

	int i;
	int j;
	
	for (i=0 ; i<5 ; i+=1){
		printf("\n");
		for (j=0 ; j<5 ; j+=1){
			printf("%s ",tabetu[i][j]);
		}
	}
	printf("\n");



	return 0 ;
}
