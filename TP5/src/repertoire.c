/* TP5
Piccinali Amandine et Le Corre Sarah
Lecture de nom de dossiers et de fichier
Exercice 5.1
Exercice 5.2*/


#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>

#include "repertoire.h"

void lire_dossier(char *nom_repertoire){
	
	DIR *dirp = opendir (nom_repertoire);

	if (dirp == NULL){
		printf("erreur opendir");
	}	

	struct dirent * ent;
	while(1) {
		ent =readdir(dirp);
		if (ent == NULL){
			break;
		}
		printf("%s\n",ent ->d_name);
	}
	closedir(dirp);
}
	 
void lire_dossier_recursif(char *nom_repertoire){
	DIR *dirp = opendir (nom_repertoire);

	if (dirp == NULL){
		printf("erreur opendir");
	}	

	struct dirent * ent;
	while(1) {
		ent =readdir(dirp);
		if (ent == NULL){
			break;
		}
		printf("%s\n",ent ->d_name);

		char var[264];
		sprintf(var, "%s/%s", nom_repertoire, ent->d_name);

		if ((ent ->d_type == 4)&&(strcmp(ent ->d_name,".")!=0)&&(strcmp(ent ->d_name,"..")!=0)){
			lire_dossier_recursif(var);

		}

	}
	closedir(dirp);	

}
/*void lire_dossier_recursif(char *nom_repertoire){
	DIR *dirp = opendir (nom_repertoire);
}*/

int main (int argc, char **argv) {

	if (argc <2) {
		printf("Manque d'arguments\n");
		return(EXIT_FAILURE);
	}

	char *nom_repertoire=argv[1];
	//lire_dossier(nom_repertoire);
	lire_dossier_recursif(nom_repertoire);


return 0;
}
