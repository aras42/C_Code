/* 
	Doppio puntatore a stringhe
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define S 5  //righe
#define L 50  //colonne

int main() {

	char** vetstring;

	int i;
	int j;

	vetstring=(char**)malloc(S * L * sizeof(char));

	for(i=0; i<S; i++) {

		vetstring[i]=(char*)malloc(S * sizeof(char));
	}

	if(vetstring==NULL) {
		
		printf("Memoria esaurita \n");
		exit(1);
	}

	//Inserimento dati

	for(i=0;i<S;i++) {

		printf("Inserisci stringa numero %d \n",i+1 );
		scanf("%s",&vetstring[i][j]);
	}

	for(i=0;i<S;i++) {
		
		printf("%s  \n",vetstring[i]);
	}
	

	for(i=0; i<S; i++) {

		free(vetstring[i]);
	}

	printf("Memoria liberata\n"); 

	return 0;

}