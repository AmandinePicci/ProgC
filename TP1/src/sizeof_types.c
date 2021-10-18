/* 
*TP1, exercice 1.3
*Auteurs : Sarah LE CORRE, Amandine PICCINALI
*Objectif :  afficher la taille des différents types de base (en octets)
*/

/*Ecrivez un programme qui affiche la taille des différents types de base (en octets)
* char, int, short, long int, long long int avec signed et unsigned
* float, double, long double*/

#include <stdio.h>

int main() {
//Declaration des variables
	
	int a = sizeof(char);						//1
	int b = sizeof(signed int);					//4
	int c = sizeof(unsigned int);					//4
	int d = sizeof(signed short);					//2
	int e = sizeof(unsigned short);					//2
	int f = sizeof(signed long int);				//8
	int g = sizeof(unsigned long int);				//8
	int h = sizeof(signed long long int);				//8
	int i = sizeof(unsigned long long int);				//8
	int j = sizeof (float);						//4
	int k = sizeof (double);					//8
	int l = sizeof (long double);					//16


//Affichage
	printf("Taille de char égale à %d \n", a);			
	printf("Taille de int, avec signe, égale à %d \n", b);		
	printf("Taille de int, sans signe, égale à %d \n", c);		
	printf("Taille de short, avec signe, égale à %d \n", d);	
	printf("Taille de short, sans signe, égale à %d \n", e);
	printf("Taille de long int, avec signe, égale à %d \n", f);
	printf("Taille de long int, sans signe, égale à %d \n", g);
	printf("Taille de long long int, avec signe, égale à %d \n", h);
	printf("Taille de long long int, sans signe, égale à %d \n", i);
	printf("Taille de float égale à %d \n", j);
	printf("Taille de double égale à %d \n", k);
	printf("Taille de long double égale à %d \n", l);
	
	return 0;
}

