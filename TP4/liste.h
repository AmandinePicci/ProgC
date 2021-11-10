/* 
*TP4, exercice 4.7
*Auteurs : Sarah LE CORRE, Amandine PICCINALI
* Objectifs : Ajouter des couleurs dans une liste simplement chainée 
*/


// pour éviter les erreurs de double include

#ifndef LISTE_H	
#define LISTE_H

// Déclaration structures

struct couleur {
	unsigned char R;
	unsigned char G;
	unsigned char B;
};

struct liste_couleurs {
	// gestion d'une liste (simplement chainée) de couleurs.
	struct liste_couleurs *svt;
	struct couleur sc;
};

// Déclaration fonctions

void insertion (struct couleur *, struct liste_couleurs *);     // Pour insérer une couleur dans une liste
           
void parcours (struct liste_couleurs *);			// Pour parcourir la liste
void free_liste_couleurs(struct liste_couleurs *);		// Libération de la mémoire 

#endif	// LISTE_H
