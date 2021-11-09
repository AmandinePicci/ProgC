/* 
*TP4, exercice 4.1
*Auteurs : Sarah LE CORRE, Amandine PICCINALI
* Objectifs : Ecrire un programme appelant des fonctions d'operations depuis un main (calcul.c)
*/


// Fichier contenant les codes des fonctions

//Importation bibliothèques

#include <stdio.h>

// Implémentation fonctions opérations

int sum(int a , int b){return a + b;}
int diff(int a, int b){return a - b;}
int prod(int a, int b){return a * b;}
int quot(int a, int b){return a / b;}
int mod(int a, int b){return a % b;}
int et(int a , int b){return a & b;}
int ou(int a , int b){return a | b;}
int neg(int a ){return ~a+1;}

