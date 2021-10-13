/* 
*TP3, exercice 3.3
*Auteurs : Sarah LE CORRE, Amandine PICCINALI
*/

// Bibliotheques

# include <stdio.h>
# include <stdlib.h>
# include <time.h>	// Utilisee pour la generation aleatoire de nombre

int main() {

	//Déclaration du tableau
	
	int taille = 100;   //taille de mon tableau
	int tab[taille];
	
	srand(time(NULL));// permet de réinitialiser à chaque fois la séquence
	
	
	//AFFICHAGE avant traitement
	for(int i=0; i<taille; i+=1){
		tab[i]=rand()%100;
		printf("%d\t", tab[i]);
	}	
	printf("\n\n");
	
	//TRAITEMENT
	int val1;
	int val2;
	
	for(int k=0; k<taille; k+=1){ //Boucle pour lancer les tris, on en fait 100
		for(int j=1; j<taille; j+=1){  //Boucle de tri
			if (tab[j]<tab[j-1]){
				val1=tab[j];
				val2=tab[j-1];
				tab[j]=val2;
				tab[j-1]=val1;}
		} 
	}
	
	//AFFICHAGE après traitement
	for(int l=0; l<taille; l+=1){
		printf("%d\t", tab[l]);
	}
	printf("\n\n");
	return 0;
}
