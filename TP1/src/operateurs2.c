/* Fichier : operateurs2.c
*TP1, exercice 1.8
*Auteurs : Sarah LE CORRE, Amandine PICCINALI
*/

#include <stdio.h>	// Header
# include <math.h>

int main () {

// Variables

	int num1 = 75;
	int num2 = 4;
	char op ='+';

	int somme;
	int diff;
	int mult;
	float div;
	float mod;
	int and;
	int or;
	float neg;	



switch (op){

case  '+' :
	somme = num1 + num2;
	printf(" \nLa somme des variables %d et %d vaut %d \n", num1, num2, somme);
break;

case '-' :
	diff = num1 - num2;
	printf("\nLa difference des variables %d et %d vaut %d \n", num1, num2, diff);
break;
	
case '*':
	mult = num1 * num2;
	printf("\nLe produit des variables %d et %d vaut %d \n", num1, num2, mult);
break;

case '/':
	div = num1 / num2;
	printf("\nLe quotient des variables %d et %d vaut %f \n", num1, num2, div);
break;

case '%':
	mod = num1 % num2;
	printf("\nLe modulo des variables %d et %d vaut %f \n", num1, num2, mod);
break;

case '&':
	and = num1 & num2;
	printf("\nLe 'et' logique des variables %d et %d vaut %d \n", num1, num2, and);
break;

case '|':
	or = num1 | num2;
	printf("\nLe 'ou' logique des variables %d et %d vaut %d \n", num1, num2, or);
break;

case '~':
	neg = ~ num1 +1;
	printf("\nLa négation de la variable %d  vaut %f \n", num1, neg);
break;


return 0;
	}
}

	
	

