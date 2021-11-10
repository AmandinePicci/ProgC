/* 
*TP4, exercice 4.7
*Auteurs : Sarah LE CORRE, Amandine PICCINALI
* Objectifs : Ajouter des couleurs dans une liste simplement chainée 
*/

// Importation bibliothèques

#include "liste.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct liste_couleurs *s = malloc(sizeof(struct liste_couleurs));	//Allocation de mémoire (demande allocation mémoire dynamique)

	// Initialisation de couleurs
	struct couleur couleur1={0x45,0x20,0xef};	
	struct couleur couleur2={0x56,0xda,0xff};
	struct couleur couleur3={0xac,0x16,0x88};
	struct couleur couleur4={0xee,0xbb,0x99};
	struct couleur couleur5={0xea,0xdd,0x18};
	struct couleur couleur6={0xb2,0x5c,0x23};
	struct couleur couleur7={0x69,0xfa,0x28};
	struct couleur couleur8={0xf8,0x4c,0x12};
	struct couleur couleur9={0xae,0xdc,0x78};
	struct couleur couleur10={0x54,0xac,0xc8};

	// On donne à la fonction Insertion() l'adresse de c. avec l'operateur "&"
	// s est deja une adresse, donc pas besoin d'utiliser l'opérateur "&"
	insertion(&couleur1, s);
	insertion(&couleur2, s);
	insertion(&couleur3, s);
	insertion(&couleur4, s);
	insertion(&couleur5, s);
	insertion(&couleur6, s);

	parcours(s);

	free_liste_couleurs(s);		// Indique que l'on n'a plus besoin de la mémoire 
   					// demandée avec "malloc", permet de libérer la mémoire.

	return 0;
}
