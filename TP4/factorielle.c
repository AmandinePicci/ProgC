/* 
*TP4, exercice 4.5
*Auteurs : Sarah LE CORRE, Amandine PICCINALI
* Objectifs : écriture d'une fonction récursive pour calculer une factorielle
*/


// Importation bibliothèques

#include <stdio.h>
#include "fact.h"


int main() {

// Variables
	int num=4;
	
	int resultat = factorielle(num);
	printf("%d factorielle vaut %d \n",num, resultat);




return 0;
}

