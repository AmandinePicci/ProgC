# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main() {

	//Déclaration du tableau
	
	int taille = 50;   
	int tab[taille];
	int entier=25;
	
	srand(time(NULL));
	
	//TRI DU TABLEAU
	for(int i=0; i<taille; i+=1){
		tab[i]=rand()%100;
		//printf("%d\t", tab[i]);
	}	
	printf("\n\n");
	int val1;
	int val2;
	for(int k=0; k<taille; k+=1){ 
		for(int j=1; j<taille; j+=1){  
			if (tab[j]<tab[j-1]){
				val1=tab[j];
				val2=tab[j-1];
				tab[j]=val2;
				tab[j-1]=val1;}
		} 
	}
	
	//AFFICHAGE tableau trié
	for(int l=0; l<taille; l+=1){
		printf("%d\t", tab[l]);
	}
	printf("\n\n");
	
	
	//RECHERCHE
	int max=taille;
	int min=0;
	int milieu=(max+min)/2;
	
	for(int m=0; m<taille; m+=1){
		if (entier==tab[milieu]){
			printf("\n\n Entier présent\n");
			break;}
		else if (entier>tab[milieu]){
			min=milieu;
			milieu=(max+min)/2;
			//printf("\n milieu %d \n", milieu);
			}
		else {
			max=milieu;
			milieu=(max+min)/2;
			//printf("\n\n milieu %d \n", milieu);
			}
		
	}
	
	return 0;
}
