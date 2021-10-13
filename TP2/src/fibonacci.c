/* TP2
Exercice 2.3
Afficher la suite de fibonacci*/

# include <stdio.h>

int main() {
	
	//Déclaration des variables dont nous avons besoin pour les calculs
	int n=10;  //Nombre de termes de la suite, si n devient trop grand, on dépasse les 31 bits et les valeurs vont être altérés
	int k;	//Variable pour le calcul, permet de ne pas écraser les valeurs de U0 et U1
	
	//Déclaration des premiers termes de la suite
	int U0=1;
	int U1=1;

	//Affichage des 2 premiers termes
	printf("Les %d entiers de la suite Fibonacci sont :\n U0=%d\n U1=%d\n",n,U0,U1);

	//Calculs et affichage du reste de la suite
	for (int i=0 ; i<n ; i+=1){
		k=U1+U0;
		U0=U1;
		U1=k;
		printf(" U%d=%d\n",i,k);
	}


	return 0 ;
}
