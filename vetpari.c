/*
  Scrivere un programma che legga due vettori (di interi) di N elementi (specificato dall'utente)
  ciascuno con un massimo di 20 inserimenti. Il programma deve creare un ulteriore vettore, che contenga la 
  copia dei soli elementi pari presenti nei due vettori di partenza, e stampare tale vettore.
*/

#include <stdio.h>

#define max 20

int main() {

	int vet1[max];
	int vet2[max];
	
	int vet3[2*max];
	
	int i;
	int j=0;
	int N;

	printf("Quanti numeri vuoi inserire? \n");
	scanf("%d",&N);

	for(i=0;i<N;i++) {

		printf("Inseririmento numero %d del primo vettore:\n",i+1);
		scanf("%d",&vet1[i]);
	}
	
	for(i=0;i<N;i++) {

		printf("Inserimento numero %d del secondo vettore:\n",i+1);
		scanf("%d",&vet2[i]);

	}

	for(i=0;i<N;i++) {

		if (vet1[i] % 2 == 0) {

			vet3[j]=vet1[i];
			j++;

		}

		if (vet2[i] % 2 == 0) {

			vet3[j]=vet2[i];
			j++;

		}

	}

	printf("Il risultato e':\n");

     for(i=0;i<j;i++) {

     	printf("%d, ",vet3[i]);
     }

}