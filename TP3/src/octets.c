/* TP3, exercice 3.6
*Auteurs : Sarah LE CORRE, Amandine Piccinali
*Ecrire un programme en utilisant char et les opérateurs de pointeurs pour voir les octets d'une variable short, int, long int, float, double et long double.
*/


#include <stdio.h>	

int main () {

// Variables

	short sh = 1; 
	int i = 2;
	long int l_int = 255;
	float fl = 2.4;
	double dble = 9.3;
	long double lg_dble = 663.6;

	int compteur;

// Pointeurs
	unsigned char *point_s = (char*)&sh; 
	unsigned char *point_i = (char*)&i;
	unsigned char *point_li = (char*)&l_int;
	unsigned char *point_f = (char*)&fl;
	unsigned char *point_d = (char*)&dble;
	unsigned char *point_ld = (char*)&lg_dble;

// Boucles for pour affichage octets

	for (compteur = sizeof(short)-1 ;compteur>=0;compteur--){	// Le pointeur part du lsb, donc on décrémente le compteur pour avoir le msb en premier
			printf("%x ", *(point_s + compteur));
		}
	printf("\n");


	for (compteur = sizeof(int)-1 ;compteur>=0;compteur--){
			printf("%x ", *(point_i + compteur));
		}
	printf("\n");

	
	for (compteur = sizeof(long int)-1 ;compteur>=0;compteur--){
			printf("%x ", *(point_li + compteur));
		}
	printf("\n");


	for (compteur = sizeof(float)-1 ;compteur>=0;compteur--){
			printf("%x ", *(point_f + compteur));
		}
	printf("\n");

	for (compteur = sizeof(double)-1 ;compteur>=0;compteur--){
			printf("%x ", *(point_d + compteur));
		}
	printf("\n");


	for (compteur = sizeof(long double)-1 ;compteur>=0;compteur--){
			printf("%x ", *(point_ld + compteur));
		}
	printf("\n");


	return 0;
}
