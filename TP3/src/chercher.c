# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main() {

	//Déclaration du tableau
	
	int taille = 100;   //taille de mon tableau (au début mis 10 pour que ce soit plus simple)
	int tab[taille];
	
	int find=0;
	
	srand(time(NULL));
	
	//AFFICHAGE
	for(int i=0; i<taille; i+=1){
		tab[i]=rand()%100;
		printf("%d\t", tab[i]);
	}
	//TRAITEMENT
	for(int j=0; j<taille; j+=1){
		if(find==tab[j]){
			printf("\n\n entier présent\n");
			break;}
	}	
	printf("\n\n");

	return 0;
}
