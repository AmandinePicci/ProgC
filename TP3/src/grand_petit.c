/* 
*TP3, exercice 3.2
*Auteurs : Sarah LE CORRE, Amandine PICCINALI
*/

// Bibliotheques

# include <stdio.h>
# include <stdlib.h>
# include <time.h>	// Utilisee dans la generation aleatoire de nombre

int main() {

// Initialisation variables
	
	int tab[100];	// Creation d un tableau vide
	int compteur;
	int maxi=0;	
	int mini=100;

// Remplissage tableau
	
	srand(time(NULL));
	for(compteur=0; compteur<100; compteur+=1){
		tab[compteur]=rand()%100;	// Remplissage de nombres aleatoires
		printf("%d\t", tab[compteur]);
		
// Test si le nombre est plus petit que le min actuel ou plus grand que le max actuel
		
		if (maxi<tab[compteur]){
			maxi=tab[compteur];}	// Change la valeur du max
		
		if (mini>tab[compteur]){
			mini=tab[compteur];}	// Change la valeur du min

	}	

// Affichage
	
	printf("Le maximum est : %ld \n", maxi));
	printf("Le minimum est : %d \n", mini);
	
	return 0;
}
