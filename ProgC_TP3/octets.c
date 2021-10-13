# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main() {
	
	int var = 652456552;
	unsigned char *ptr= (unsigned char*)&var;
	
	int i=0;
	
	for (i=0; i<sizeof(int); i+=1){
		printf("%d",*(ptr+i));
	}	
	
	
	return 0;
}
