/*
  Scrivere un programma in linguaggio C che legge N numeri interi da tastiera e
  li memorizza in un vettore. Il numero N viene inserito dall'utente ed è minore di 20.
  Il programma deve generare un secondo vettore che compatta i numeri cotenuti nel primo vettore
  In particolare:
  1.Ogni numero che compare ripetuto nel primo vettore, deve comparire 
  una sola volta nel secondo vettore.
  2.Ogni numero uguale a zero presente nel primo vettore non deve comparire nel 
  seconndo vettore.

  Il programma deve visualizzare il contenuto del secondo vettore.
*/

#include <stdio.h>

#define mx 20

int main () {

	int vet1[mx];
	int N;

	int vet2[mx]; //soluzione

	int i; //indice vet1
	int j; //indice vet2
	int k; //scanziona il vettore parziale della soluzione
	int stop; //flag (se vale 1 -> non devo inserire; se vale 0 -> posso inserire)


	printf("Quanti numeri vuoi inserire? \n");
	scanf("%d",&N);

	for (;N>mx;) {

		printf("Puoi inserire massimo 20 nuemri, riprova a inserire N:\n");
		scanf("%d",&N);

	} 

	if(N<mx) {

		for (i=0; i<N;i++) {

			printf("Inserimento elemento %d: \n",i+1);
			scanf("%d",&vet1[i]);

		} 
	}

	//elaborazione

	for(i=0;i<N;i++){

		stop=0;

		for(k=0;k<j;k++) {

			if(vet1[i]==vet2[k] || vet1[i]==0) {

				stop=1;
			}
		}

		if(stop==0) {

			vet2[j]=vet1[i];
			j++;
		}
	}

	//fase di stampa

	printf("Il risultato e': \n");

	for(i=0;i<j;i++) {

		printf("%d  ",vet2[i]);
	}
}