/* 
*TP3, exercice 3.5
*Auteurs : Sarah LE CORRE, Amandine PICCINALI
*/

// Bibliotheques 
# include <stdio.h>
# include <stdlib.h>
# include <time.h>	// Utilisee pour la generation aleatoire de nombre


int main() {

//Déclaration du tableau et des variables
	
	int taille = 50;   
	int tab[taille];
	int entier=25;
	
	srand(time(NULL));	// Generation aleatoire de nombre
	
	//TRI DU TABLEAU
	for(int i=0; i<taille; i+=1){
		tab[i]=rand()%100;	// Remplissage aleatoire du tableau
		//printf("%d\t", tab[i]);
	}	
	
	printf("\n\n");
	
	int val1;
	int val2;
	
// BOUCLE DE TRIE DU TABLEAU
	for(int k=0; k<taille; k+=1){ 
		for(int j=1; j<taille; j+=1){  
			if (tab[j]<tab[j-1]){
				val1=tab[j];
				val2=tab[j-1];
				tab[j]=val2;
				tab[j-1]=val1;}
		} 
	}
	
//AFFICHAGE TABLEAU TRIE
	for(int l=0; l<taille; l+=1){
		printf("%d\t", tab[l]);
	}
	printf("\n\n");
	
	
//RECHERCHE DICHOTOMIQUE
	int max=taille;
	int min=0;
	int milieu=(max+min)/2;
	
	for(int m=0; m<taille; m+=1){
		if (entier==tab[milieu]){		// L'entier a ete trouve 
			printf("\n\n Entier présent\n");
			break;}
		else if (entier>tab[milieu]){		// Entier dans la partie superieure du tableau trie
			min=milieu;
			milieu=(max+min)/2;
			//printf("\n milieu %d \n", milieu);	
			}
		else {
			max=milieu;			// Entier dans la partie inferieure du tableau trie
			milieu=(max+min)/2;
			//printf("\n\n milieu %d \n", milieu);
			}
		
	}
	
	return 0;
}
