/*
Si scriva un programma che calcoli il MCD con l'algoritmo di Euclide
  L'algoritmo di Euclide è un algoritmo per trovare il MCD tra due 
  nuemri interi.
  Dati due numeri A e B, si controlla se B è zero
  Se lo è, A è il MCD. Se non lo è si divide A/B e si assegna ad r
  il resto della divisione.
  Se r = 0 allora si può terminare affermando che B è il MCD cercato,
  altrimenti occorre assegnare A = B e B = r
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

	int A;
	int B;
	int r;

	printf("Inserisci il primo numero \n");
	scanf("%d",&A);

	printf("Inserisci il secondo numero \n");
	scanf("%d",&B);

	if (B==0) {

		printf("%d e' il MCD",A);
		
	} else {

		do {

		r=A%B;

		if (r==0) {

			printf("%d e' il MCD \n",B);

		} else {

			A=B;
			B=r;
		} 
		} while (r!=0);
	}
}
