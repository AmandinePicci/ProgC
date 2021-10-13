/* 
*TP1, exercice 1.2
*Auteurs : Sarah LE CORRE, Amandine PICCINALI
*/

#include <stdio.h>
#include <math.h>

/*Ecrivez un programme qui calcule l'aire et le périmètre d'un cercle
*a. l'aire : Utilisez une variable rayon : float ou double
*b. le périmètre : utilisez une variable rayon : float ou double
*
*Compilez cercle.c et créez un fichier éxecutable nommé cercle*/

int main(){
	float rayon = 2.13756; // déclaration variable 
	float a = M_PI*rayon*rayon; //a=aire
	float b = M_PI*2*rayon;	//b=périmètre
	printf("L'aire du cercle de rayon %.2f est égale à %.2f \n", rayon, a);
	printf("Le périmètre du cercle de rayon %.2f est égale à %.2f \n", rayon, b);
	return 0;
}
