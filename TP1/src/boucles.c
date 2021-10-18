/* 
*TP1, exercice 1.6
*Auteurs : Sarah LE CORRE, Amandine PICCINALI
*Objectifs :Ecrore un programme boucles.c qui utilise for, # et * et qui affiche un triangle rectangle.
*/


#include <stdio.h>

/*Ecrivez un programme qui utilise for, # et * et qui affiche un triangle rectangle. 
La taille du triangle est dependent de la valeur de la variable compter (compter < 4 inacceptable).
Exemple si compter = 5 le programme affiche
*
* *
* # *
* # # *
* * * * *
Tester le code avec les différentes valeurs de compter. Ecriver une nouvelle version avec while ou do..while */


int main () {
	
	int compter = 5;
/*	int i;	//comptera le numéro de la ligne pour la hauteur du triangle
	int k;	//comptera le numéro de la colonne pour savoir différencier # et *

	for(i=0; i<compter ; i+=1){
		for(k=0; k<=i; k+=1){
			if (i==compter-1)(
				printf("* "));
			else if ((k>0) && (k<i))(
				printf("# "));
			else(
				printf("* "));
			}
		printf("\n");
		}
*/	
	

	int i=0;
	int k=0;

	while(i<compter){
		if (i
		printf("* ");
		while(k<i-1){
			printf("# ");

			k+=1;		
			}
		printf("\n");
		i+=1;
	
		}
	
	return 0;
}

