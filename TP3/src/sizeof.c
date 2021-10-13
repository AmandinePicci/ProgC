/* 
*TP3, exercice 3.1
*Auteurs : Sarah LE CORRE, Amandine PICCINALI
*/

// Bibliotheque
# include <stdio.h>

int main() {
// Affichage des tailles 
	printf("int %ld\n", sizeof(int));
	printf("int* %ld\n", sizeof(int*));
	printf("int** %ld\n", sizeof(int**));
	printf("char* %ld\n", sizeof(char*));
	printf("char** %ld\n", sizeof(char**));
	printf("char*** %ld\n", sizeof(char***));
	printf("float* %ld\n", sizeof(float*));
	printf("float** %ld\n", sizeof(float**));
	printf("float*** %ld\n", sizeof(float***));
	
	/* Le premier est la taille d'un entier, dès qu'on rajoute une * c'est le pointeur
	C'est à dire que c'est la taille de l'adresse de l'entier puis ** c'est la taille de 
	l'adresse du pointeur. Comme on est sur une machine de 64 bits on a une taille fixée de 8
	pour chaque pointeur*/
	
	return 0;
	}
