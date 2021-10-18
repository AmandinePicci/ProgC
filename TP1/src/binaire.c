/* 
*TP1, exercice 1.9
*Auteurs : Sarah LE CORRE, Amandine PICCINALI
* Objectifs :Ecrire un programme qui affiche "bonjour le monde!" à l'écran.
*/

#include <stdio.h>	// Header


int main () {

// Variables

	int entier = 1024;
	int max = 17;	//Nombre de bit maximal 
	int reste;	
	int binaire[17]; 
	int i;
	float div;

// Succession de divisions par 2 pour obtenir le nombre en binaire ( on note les restes des divisions 0 ou 1 dans le tableau binaire)

	for (i=0; i<max;i++){

		div = entier / 2;
		binaire[i] = entier % 2;
		entier = div;
	}
		
// Boucle for pour inverser l'affichage du nombre en binaire
		
	for(i=max-1;i>=0; i--){

		printf(" %d ", binaire[i]);

	}
		
	printf("\n");

	return 0;
}

