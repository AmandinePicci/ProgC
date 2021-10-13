/* TP1, exercice 1.4
*Auteur : Sarah LE CORRE, Amandine PICCINALI
*/

#include <stdio.h>

/*Ecrivez un programme qui affecte et affiche les valeurs des variables des différents
* types de base :
* char, int, short, long int, long long int avec signed et unsigned
* float, double, long double*/

int main() {

// Declaration des variables
	
	char a = 'a';
						
	signed int b = -4;					
	unsigned int c = 4;
					
	signed short d = -160;					
	unsigned short e = 160;
					
	long int f = -1234553;				
	unsigned long int g = 1234553;	
			
	long long int h = 123456789123;				
	unsigned long long int i = 123456789123;	
			
	float j = 4.2;						
	double k = 0.123456789;					
	long double l = 0.123456789;					


//Affichage
	printf("Variable char égale à %c \n", a);
			
	printf("Variable int, avec signe, égale à %d \n", b);		
	printf("Variable int, sans signe, égale à %d \n", c);
		
	printf("Variable short, avec signe, égale à %d \n", d);	
	printf("Variable short, sans signe, égale à %d \n", e);

	printf("Variable long int, avec signe, égale à %ld \n", f);
	printf("Variable long int, sans signe, égale à %ld \n", g);

	printf("Variable long long int, avec signe, égale à %lld \n", h);
	printf("Variable long long int, sans signe, égale à %lld \n", i);

	printf("Variable float égale à %f \n", j);
	printf("Variable double égale à %f \n", k);
	printf("Variable long double égale à %Lf \n", l);
	
	return 0;
}
