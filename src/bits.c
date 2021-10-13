/* TP2
Exercice 2.2
Comparateur des bits en 4ème et 20ème*/

# include <stdio.h>

int main() {
	int d=556040;	//Nombre que l'on veut comparé
	int ref =524296; //C'est le nombre codé avec que des bits à 0 sauf pour le 4ème bit et le 20ème
	
	int affiche=0;	//Retour automatiquement à 0 que l'on passera à 1 si les bits que l'on veut sont bien à 1

	if ((d&ref)==ref)	//On doit mettre des paranthèse pour priotiser l'op & sinon == est 
		{		// prioritaire et le & ne se fera pas. Le programme ne marche pas 
		affiche=1;}	// sans les ()
	
	printf("%d\n",affiche);
	//printf("d&ref=%d\n",d&ref); //test de vérification


	return 0 ;
}
