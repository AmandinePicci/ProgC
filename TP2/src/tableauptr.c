/* TP 2, Le Corre Sarah, Piccinali Amandine
Exercice 2.9
Utiliser les pointeurs pour parcourir deux tableaux et effectuer des opérations
*/

#include<stdio.h>
#include<stdlib.h>


int main () {
	//Initialisation des tableaux
	int tableauInt [5]={0};
	float tableauFloat [5]={0};

	//Initialisation des pointeurs des tableaux
	int *ptrint=&tableauInt[0];
	float *ptrfloat=&tableauFloat[0];

	//Remplissage et mulitiplication
	for (int i=0; i<=5;i+=1){
		*ptrint=rand() %100;	//Remplissage de valeurs aléatoire limités à 100
		*ptrfloat=rand() %100;
		if (i%2==0) {
			*ptrint*=3;	//Multiplication
			*ptrfloat*=3;
		}
		//Affichage
		printf("Tableau int : %d \n Tableau float : %f \n \n",*ptrint,*ptrfloat);
	}



	return 0;
}
