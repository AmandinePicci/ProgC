#include <stdio.h>

int main() {

	char *message = "etudiant";
	ecrire_dans_fichier("text.txt",message,sizeof("etudiant"));
	lire_fichier("text.txt");


return 0;
}
