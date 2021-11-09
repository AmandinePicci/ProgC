/* TP2, Le Corre Sarah, Piccinali Amandine
Exercice 2.7
Tableau de couleur*/

#include<stdio.h>
#include<string.h>

struct Couleur_RGBA { // initialisation des différents composants d'une couleur
	char R;
	char G;
	char B;
	char A;

};




int main(){
	//initialisation des 10 couleurs
	struct Couleur_RGBA couleur1={0x45,0x20,0xef,0xab};
	struct Couleur_RGBA couleur2={0x56,0xda,0xff,0x08};
	struct Couleur_RGBA couleur3={0xac,0x16,0x88,0x15};
	struct Couleur_RGBA couleur4={0xee,0xbb,0x99,0x42};
	struct Couleur_RGBA couleur5={0xea,0xdd,0x18,0x23};
	struct Couleur_RGBA couleur6={0xb2,0x5c,0x23,0x42};
	struct Couleur_RGBA couleur7={0x69,0xfa,0x28,0x45};
	struct Couleur_RGBA couleur8={0xf8,0x4c,0x12,0x11};
	struct Couleur_RGBA couleur9={0xae,0xdc,0x78,0x75};
	struct Couleur_RGBA couleur10={0x54,0xac,0xc8,0x59};
	
	//Mise des 10 couleurs dans un tableau
	struct Couleur_RGBA tableau[] = {couleur1,couleur2,couleur3,couleur4,couleur5,couleur6,couleur7,couleur8,couleur9,couleur10};
	
	//Affichage grâce à une boucle for
	for (int i=0;i<10;i++){
		printf("Pour la %d couleur\n", i+1);
		printf("R : %d\n",tableau[i].R);
		printf("G : %d\n",tableau[i].G);
		printf("B : %d\n",tableau[i].B);
		printf("A : %d\n",tableau[i].A);
		printf("\n");
	}
	return 0;
}
