

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int taille = 100;
	
	// On initialise la structure
	struct couleur {
		int rouge;
		int vert;
		int bleu;
		int alpha;
	};
	
	int i ;

	struct couleur liste_couleur[taille];
	
	// On genere 100 couleurs dont 2 couleurs qui apparaissent 10 fois chacune pour pouvoir se donner un repere
	for (i = 0 ; i < taille ; i++){
		if(i < 10){
			liste_couleur[i].rouge = 0xff;
			liste_couleur[i].vert = 0x00;
			liste_couleur[i].bleu = 0x00;
			liste_couleur[i].alpha = 0x00;
		}else if (i > 49 && i < 60){
			liste_couleur[i].rouge = 0x00;
			liste_couleur[i].vert = 0xff;
			liste_couleur[i].bleu = 0x00;
			liste_couleur[i].alpha = 0x00;
		}else{
			liste_couleur[i].rouge = rand() %256;
			liste_couleur[i].vert = rand() %256;
			liste_couleur[i].bleu = rand() %256;
			liste_couleur[i].alpha = rand() %256;
		}
	}
	
	// Recherche des différentes couleurs et de leur occurence
	int occurence = 1;
	int j; // nous en avons besoin pour faire des iterations dans une boucle dans une boucle
	int test = 0;
	for (i = 0 ; i < taille ; i++){
		occurence = 1;
		test = 0;
		for (j = 0 ; j < taille ; j++){
			if (j != i) {
				// dans le prochain if nous verifions que la couleur n'ait pas deja ete comptee dans une iteration de i precedente.
				if ( (i > j) && (liste_couleur[i].rouge == liste_couleur[j].rouge && liste_couleur[i].vert == liste_couleur[j].vert && liste_couleur[i].bleu == liste_couleur[j].bleu && liste_couleur[i].alpha == liste_couleur[j].alpha)){
					test = 1; // si la couleur a deja ete comptee, cette variable nous permet d'arreter de compter et de plus de ne rien afficher
				// dans le prochain else if nous verifions que la couleur est la meme
				}else if ((liste_couleur[i].rouge == liste_couleur[j].rouge && liste_couleur[i].vert == liste_couleur[j].vert && liste_couleur[i].bleu == liste_couleur[j].bleu && liste_couleur[i].alpha == liste_couleur[j].alpha) && (test == 0)){
					occurence++;
				}
			}
		}
		if (test == 0){
			printf("La couleur r:0x%x g:0x%x b:0x%x a:0x%x est présente %d fois\n",liste_couleur[i].rouge,liste_couleur[i].vert,liste_couleur[i].bleu,liste_couleur[i].alpha,occurence);
		}
	}
	
	return(0);
}
