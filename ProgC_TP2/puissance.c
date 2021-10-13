# include <stdio.h>

int main() {
	int a = 15; //nombre
	int b = 4; //puissance
	
	int i;	// variable permettant de faire la boucle
	int rep=a;  //variable finale contenant le résultat
	
	for (i=1 ; i<b ; i+=1){
		rep=rep*a;
	} 
	
	printf("a^b=%d \n",rep);
	
	return 0 ;
}
