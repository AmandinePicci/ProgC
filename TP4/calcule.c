
/* 
*TP4, exercice 4.4
*Auteurs : Sarah LE CORRE, Amandine PICCINALI
* Objectifs : écrire un programme qui utilise l'interface en ligne de commande pour afficher le *résultat d'une opération.
*/


// Importation bibliothèques 

#include <stdio.h>
#include <stdlib.h>
#include "operator.h"
#include <string.h>



int main(int argc, char ** argv) {


	if ( argc == 4 ){
		
		// Arguments entrés en ligne de commande 
		// argv[i] est un pointeur, on met *argv[i] pour obtenir la valeur à l'interieur

		char op = *argv[1];
		int num1 = atoi(argv[2]);	// Convertion de string en int
		int num2 = atoi(argv[3]);

		// Appel de la fonction d'opération selon le cas

		switch (op) {

		case '+' : printf("%d+ %d = %d \n",num1,num2, sum(num1,num2));
		break;

		case '-' : printf("%d - %d = %d \n", num1, num2, diff(num1,num2));
		break;

		case '*' : printf("%d * %d = %d \n",num1,num2, prod(num1,num2));
		break;

		case '/' : printf("%d / %d = %d \n",num1, num2, quot(num1,num2));
		break;

		case '%' : printf("%d modulo %d = %d \n",num1,num2, mod(num1,num2));
		break;

		case '&' : printf("%d & %d = %d \n",num1, num2, et(num1,num2));
		break;

		case '|' : printf("%d | %d = %d \n", num1,num2, ou(num1, num2));
		break;

		case '~' : printf("~%d = %d \n",num1, neg(num1));
		break;

		}

	}

	else{
		printf("Erreur arguments, expeted 3 arguments\n");
		
		return 0;
	}


	return 0;
}
