/*

  Scrivere un programma in C che legga da tastiera una sequenza di lunghezza ignota a priori di
  numeri interi positivi; il programma a partire dal primo numero introdotto, stampa ogni volta la media 
  di tutti i numeri introdotti con due cifre decimali. Terminare quando il numero inserito è negativo

*/

#include <stdio.h>

int main() {

	float numero;
	float somma=0;
	float media;

	do {
		
		printf("Insierisci il numero \n");
		scanf("%f",&numero);

			somma = somma+numero;

			media = somma/2;

			printf("La media aritmetica e' %.2f \n",media);

		} while (numero>0);

		printf("Hai inserito un numero negativo! \n");
	}