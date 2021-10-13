/* 
*TP1, exercice 1.7
*Auteurs : Sarah LE CORRE, Amandine PICCINALI
*/


#include <stdio.h>

/*Ecrivez un programme qui utilise les boucles (for while ou do..while) et les branchements inconditionnels (break ou continue) pour l'affichage de numéros <= 1000 qui sont divisible par :
a. 2 et 15
b. 103 ou 107
c. 7 ou 5 mais pas 3*/


int main () {

	int i=0;			//a
	
	printf("Les nombres divisibles par 2 et 15 sont : \n");
	while (i<=1000){
		if (i%2==0 && i%15==0)(
			printf("%d,\n",i));
	
		i+=1;
		}


	int k=0;			//b
	printf("Les nombres divisibles par 103 ou 107 sont : \n");
	while (k<=1000){
		if (k%103==0 || k%107==0)(
			printf("%d,\n",k));
	
		k+=1;
		}
	


	int l=0;			//c
	printf("Les nombres divisibles par 7 ou 5 mais pas 3 sont : \n");
	while (l<=1000){
		if ((l%7==0 || l%5==0)&&(l%3!=0))(
			printf("%d,\n",l));
	
		l+=1;
		}
	return 0;
}

