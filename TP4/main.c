/* 
*TP4, exercice 4.7
*Auteurs : Sarah LE CORRE, Amandine PICCINALI
* Objectifs : 
*/


// Importation bibliothèques 

#include <stdio.h>
#include "liste.h"



int main() {


	char pt_rgb;
	char pt_lst_couleurs;


		//initialisation des 10 couleurs
		struct liste_couleurs couleur1={0x45,0x20,0xef};
		struct liste_couleurs couleur2={0x56,0xda,0xff};
		struct liste_couleurs couleur3={0xac,0x16,0x88};
		struct liste_couleurs couleur4={0xee,0xbb,0x99};
		struct liste_couleurs couleur5={0xea,0xdd,0x18};
		struct liste_couleurs couleur6={0xb2,0x5c,0x23};
		struct liste_couleurs couleur7={0x69,0xfa,0x28};
		struct liste_couleurs couleur8={0xf8,0x4c,0x12};
		struct liste_couleurs couleur9={0xae,0xdc,0x78};
		struct liste_couleurs couleur10={0x54,0xac,0xc8};
		
		//Mise des 10 couleurs dans un tableau
		struct liste_couleurs tableau[] = {couleur1,couleur2,couleur3,couleur4,couleur5,couleur6,couleur7,couleur8,couleur9,couleur10};
		




	return 0;
}
