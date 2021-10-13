/* 
*TP1, exercice 1.5
*Auteurs : Sarah LE CORRE, Amandine PICCINALI
*/


#include <stdio.h>

/*Ecrivez un programme qui utilise deux variables et testez les différents opérateurs arithmétiques et logiques */


int main () {
	int a = 16;
	int b =3;
	
	// Affichage des resultats
	
	printf("a<b = %d \n",a<b);
	printf("a>b = %d \n",a>b);
	printf("négation de a en tant que nombre = %d \n", !a);
	printf("négation de a en tant que bit = %d \n", ~a);
	printf("a ET b en tant que nombres = %d \n", a&&b);
	printf("a ET b en tant que bits = %d \n", a&b);
	printf("a OU b en tant que nombres = %d \n", a||b);
	printf("a OU b en tant que bits = %d \n", a|b);
	printf("b=a++ => b=%d et a=%d \n", b=a++, a);
	printf("b=++a => b=%d et a=%d \n", b=++a, a);		// reprend les valeurs de a et de b
	printf("b=a-- => b=%d et a=%d \n", b=a--, a);		// qui ont été modifiées pas les 
	printf("b=--a => b=%d et a=%d \n", b=--a, a);		//originales
	
	return 0;
}

