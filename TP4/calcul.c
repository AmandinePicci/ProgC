/* 
*TP4, exercice 4.1
*Auteurs : Sarah LE CORRE, Amandine PICCINALI
* Objectifs : Ecrire un programme appelant des fonctions d'operations depuis un main (calcul.c)
*/


// Importation bibliothèques 

#include <stdio.h>
#include "operator.h"



int main() {

// Initialisation des variables
	int num1 = 11;
	int num2 = 18;
	char op = '+';

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

	return 0;
}
