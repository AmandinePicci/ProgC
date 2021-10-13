/* TP2
Exercice 2.8
Affichage de valeurs grâce à leurs adresses*/

#include <stdio.h>

int main() {

	//Initialisation des différents types de variables ainsi que leurs pointeurs
	int i = 2;
	int *pi=&i;
	float f=2.302;
	float *pf=&f;
	char c='c';
	char *pc=&c;
	short s=56;
	short *ps=&s;
	long int li=1549;
	long int *pli=&li;
	long long int lli=0LL;
	long long int *plli=&lli;
	double d=5.6;
	double *pd=&d;
	long double ld=2.75986;
	long double *pld=&ld;

	//Affichage des valeurs et adresses avant changement
	printf("Valeurs et adresses actuelles\n");
	printf("int =%d\n adresse=%p\n \n",*pi,pi);
	printf("float =%f\n adresse=%p\n \n",*pf,pf);
	printf("char =%c\n adresse=%p\n \n",*pc,pc);
	printf("short =%hu\n adresse=%p\n \n",*ps,ps);
	printf("long int =%li\n adresse=%p\n \n",*pli,pli);
	printf("long long int =%lli\n adresse=%p\n \n",*plli,plli);
	printf("double =%g\n adresse=%p\n \n",*pd,pd);
	printf("long double =%lg\n adresse=%p\n \n",*pld,pld);

	//Changement adresse des valeurs aux différents types de variables 
	*pi+=1;
	*pf+=12;
	*pc+=2;
	*ps+=5;
	*pli-=24;
	*plli-=3;
	*pd+=6;
	*pld+=3;
	
	//Affichage des nouvelle adresses
	printf("Nouvelles valeurs et adresses\n\n");
	printf("int =%d\n adresse=%p\n \n",*pi,pi);
	printf("float =%f\n adresse=%p\n \n",*pf,pf);
	printf("char =%c\n adresse=%p\n \n",*pc,pc);
	printf("short =%hu\n adresse=%p\n \n",*ps,ps);
	printf("long int =%li\n adresse=%p\n \n",*pli,pli);
	printf("long long int =%lli\n adresse=%p\n \n",*plli,plli);
	printf("double =%g\n adresse=%p\n \n",*pd,pd);
	printf("long double =%lg\n adresse=%p\n \n",*pld,pld);	




	return 0;
}

