/*
  Scrivere un programma in lunguaggio C che legge N numeri interi
  da tastiera e li memorizza in un vettore. Il numero N viene inse-
  rito dall'utente ed è minore di 20. Il programma deve visualizzare,
  per ogni cifra contenuta nel vettore, il numero di occorrenze (quante
  vonte compare un numero nel vettore)
*/

#include <stdio.h>

#define mx 20

int main () {

	int vet[mx];

	int N;

	int i;

	int j;

	int occ;

	int giaFatto; //flag che vale 1 se il numero è già stato trattato e vale 0 se è un nuovo numero da trattare

	puts("Quanti numeri vuoi inserire? \n");
	scanf("%d",&N);

	if (N <= mx ) {

		for (i=0;i<N;i++) {

			printf("Inserisci elemento %d \n",i+1 );
			scanf("%d",&vet[i]);
		}
	}

	printf("La sequenza di numeri da te inserita e':\n");

	for (i=0;i<N;i++) {

		printf("%d  ",vet[i]);
	
	}

	// elaborazione

	for(i=0;i<N;i++) {

		giaFatto=0;

		for(j=0;j<i;j++) {

			if(vet[i]==vet[j]) {

				giaFatto=1;
			}
		}

		if(giaFatto==0) {

			occ=0;

			for(j=0;j<N;j++) {

				if(vet[i]==vet[j]) {

					occ++;
				}
			}

			printf("Numero %d; occorrenze: %d \n",vet[i],occ );
		}

	}

	//output



}