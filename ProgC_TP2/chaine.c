# include <stdio.h>

int main() {


	int questionNumero=3;
	
	switch (questionNumero){
		case 1 : {
		
			char chaine[]="message";	//longueur égal à 7
			
			int k=0;
			
			while (chaine[k]!=0){
				k+=1;
			}

			printf("%s\n",chaine);
			printf("%d\n",k);
			
			break;
			}
			
		case 2 : {
			
			char chaine1[]="un message\n";	
			
			int k=0; 	//longueur du message, code en case 1
			while (chaine1[k]!=0){
				k+=1;}
			
			
			char chaine2[k];
			
			int i=0;
	
			for (i=0 ; i<k ; i+=1){
			
				chaine2[i]=chaine1[i];
			
			}
			
			printf("%s\n",chaine2);
			break;
			}
			
		case 3 : {
			
			char chaine1[]="Le lièvre ";
			char chaine2[]="et la tortue.\n";
			
			int k=0; 	//longueur de chaine 1
			while (chaine1[k]!=0){
				k+=1;}
			
			int l=0; 	//longueur de chaine 2
			while (chaine2[l]!=0){
				l+=1;}
				
			char chaine3[k+l+1];	//concaténation des deux chaines de longueur 
			 			//l'une plus l'autre
 			chaine3[k+l+1]='\0';	// rajoute un zéro pour pour que l'affichage 							//s'arrête
 			
			int i=0;
			for (i=0 ; i<k ; i+=1){		// on met chaine 1 dans chaine 3
				chaine3[i]=chaine1[i];}
			int j=i;
			for (j=i ; j<k+l ; j+=1){
				chaine3[j]=chaine2[j-i];}
			
			//Affichage de la chaine concaténé
			int m=0;
			for (m=0 ; m<k+l ; m+=1){
				printf("%c",chaine3[m]);}
			printf("\n\n");
				
			//printf("%s\n", chaine3); //si utilise cette façon pour afficher alors
							// le / va apparaître à la fin du
							// message d'où le dernier for pour 
							//l'affichage
			
			break;
			}
		}
	return 0 ;
}
