/* TP 2
Exercice 2.1
Calculer a puissance b*/

# include <stdio.h>

int main() {

	//Déclaration
	int a = 15; //nombre
	int b = 4; //puissance

	int i;	// variable permettant de faire la boucle
	int rep=a;  //variable finale contenant le résultat
	

	//Calcul
	for (i=1 ; i<b ; i+=1){
		rep=rep*a;
	} 
	

	//Affichage
	printf("a^b=%d \n",rep);
	
	return 0 ;
}
