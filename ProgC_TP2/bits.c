# include <stdio.h>

int main() {
	int d=556040;
	int ref =524296; 
	
	int affiche=0;

	if ((d&ref)==ref)	// doit mettre des paranthèse pour priotiser l'op & sinon == est 
		{		// prioritaire et le & ne se fera pas. Le programme ne marche pas 
		affiche=1;}	// sans les ()
	
	printf("%d\n",affiche);
	//printf("d&ref=%d\n",d&ref); //vérification


	return 0 ;
}
