/*
  Data una matrice di dimensione unguale a 10 righe per 10 colonne
  contenente elementi reali, scrivere un programma in linguaggio C per 
  individuare se esistono righe o colonne composte solo da elementi negativi
*/

#include <stdio.h>

#define righe 4
#define colonne 4

int main () {

	double mat[righe][colonne];

	int i; //indice per le righe
	int j; //indice per le colonne

	int trovato; //vale 1 se ho trovato una riga negativa o una colonna negativa; vale 0 altrimenti
	int valido; // vale 1 se ho una matrice che rispetta la condizione
	
	printf("Inserisci gli elementi della matrice: \n");

	for (i=0; i<righe; i++) {

		for (j=0; j<colonne; j++) {

			printf("Inserisci elementi: %d,%d \n",i,j);
			scanf("%lf",&mat[i][j]);
		}
	}

	for (i=0; i<righe; i++) {

		printf("\n");

		for (j=0; j<colonne; j++) {

			printf("%f ",mat[i][j]);
			
		}
	}

	//elaborazione

	//Analisi righe
	
	valido==0;
	
	for (i=0;i<righe;i++) {

		trovato=1;

		for(j=0;j<colonne;j++)  {

			if(mat[i][j]>0) {

				trovato=0;
			}
		}

		if (trovato==1) {

			valido=1;

		}

	}

	//Analisi colonne

	for (j=0;j<righe;j++) {

		trovato=1;

		for(i=0;i<colonne;i++)  {

			if(mat[i][j]>0) {

				trovato=0;
			}
		}

		if (trovato==1) {

			valido=1;
		}
	}
	
	if (valido==1) {

		printf("La matrice contiene almeno una riga o una colonna tutta negativa\n");

	}else {

		printf("La matrice non contiene almeno una riga o una colonna tutta negativa\n");
	}
}
