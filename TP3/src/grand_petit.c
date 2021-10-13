# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main() {

	int tab[100];
	int compteur;
	int maxi=0;
	int mini=100;
	
	srand(time(NULL));
	for(compteur=0; compteur<100; compteur+=1){
		tab[compteur]=rand()%100;
		printf("%d\t", tab[compteur]);
		
		if (maxi<tab[compteur]){
			maxi=tab[compteur];}
		
		if (mini>tab[compteur]){
			mini=tab[compteur];}

	}	
	printf("Le maximum est : %ld \n", maxi));
	printf("Le minimum est : %d \n", mini);
	
	return 0;
}
