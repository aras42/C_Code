// Lezione sui puntatori

#include <stdio.h>

int main() {

	int a;

	int**p1; //puntatore alla variabile di tipo intero

	int* p; //contiene un indirizzo di una variabile intera

	p = &a;

	printf("Inserire un numero \n");
	scanf("%d",p);

	printf("%d",a );

	printf("Indirizzo di a: %p \n",p );
	printf("Indirizzo di a: %p\n",&a );

	