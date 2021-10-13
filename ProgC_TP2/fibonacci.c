# include <stdio.h>

int main() {

	int n=10;  // si n devient trop grand, on dépasse les 31 bits et les valeurs vont être
	
	int i=0; //altérés, il faudrai mettre une limite.
	int k;
	
	int U0=1;
	int U1=1;

	printf("Les %d entiers de la suite Fibonacci sont :\n U0=%d\n U1=%d\n",n,U0,U1);

	for (i=0 ; i<n ; i+=1){
		k=U1+U0;
		U0=U1;
		U1=k;
		printf(" U%d=%d\n",i,k);
	}


	return 0 ;
}
