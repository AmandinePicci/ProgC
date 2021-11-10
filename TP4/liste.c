/* 
*TP4, exercice 4.7
*Auteurs : Sarah LE CORRE, Amandine PICCINALI
* Objectifs : Ajouter des couleurs dans une liste simplement chainée 
*/

// Importation bibliothèques

#include "liste.h"
#include <stdio.h>
#include <stdlib.h>


// Implémentation des fonctions



// insertion prend deux entrées: pointeur d'une couleur RGB *c et pointeur d'une liste de couleurs *l


void insertion (struct couleur *c, struct liste_couleurs *l)
{
	struct liste_couleurs *l2 = malloc(sizeof(struct liste_couleurs));	//malloc :Allocation de mémoire (demande allocation mémoire dynamique) 
								
	l2->svt = NULL;	// Pointeur pointe vers l'élément suivant qui est NULL car pour l'instant on a qu'un seul élément

	// on fait pointer le pointeur "premier" vers notre nouvel élément 

	l2->sc = *c;

	struct liste_couleurs *tmp = l;

	while(tmp->svt != NULL)	// Boucle qui continue jusqu'à ce qu'on arrive au dernier élément de la liste (élément suivant différent de NULL)
	{
		tmp = tmp->svt;
	}
	tmp->svt = l2;
}




void parcours (struct liste_couleurs *l)
{
	while(l)	// Tant que l'on arrive pas à la fin de la liste, on affiche les éléments actuels
	{
		printf("0x%x 0x%x 0x%x\n", l->sc.R, l->sc.G, l->sc.B);
		l = l->svt;	// pointe sur l'élément suivant
	}
}



// Fonction libération mémoire

void free_liste_couleurs(struct liste_couleurs *l)
{
	struct liste_couleurs *tmp;
	while(l)	// On doit faire une boucle pour libérer tous les espaces mémoire demandés pour chaque élément
	{
		tmp = l->svt;
		free(l);
		l = tmp;
	}	
}
