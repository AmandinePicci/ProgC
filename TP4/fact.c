/* 
*TP4, exercice 4.5
*Auteurs : Sarah LE CORRE, Amandine PICCINALI
* Objectifs : écriture d'une fonction récursive pour calculer une factorielle
*/


#include <stdio.h>
// contient les codes de la fonction factorielle


int factorielle (int num) {
if (num == 0) {
	return 1;

}
else {
	return (num * factorielle (num -1));	//On rappelle factorielle

}
}
