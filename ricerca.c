/* 
	Si realizzi un programma che facendo uso di una funzione bin_ricerca, 
	implementi l’algoritmo di ricerca dicotomica di un elemento in un array.
*/ 

#include <stdio.h>
#include <stdlib.h>

int *alloc(int N) {
	int *v;

	v = (int*)malloc(N * sizeof(int));

	if(v == NULL) {

		printf("Impossibile allocare memoria \n");
		exit(1);
	}
	return v;
}

void insvet(int N, int *v) {

	int i;

	for( i = 0; i < N; i++) {

		printf("Inserisci elemto %d del vettore \n", i + 1);
		scanf("%d", &v[i]);
	}
}

void bubble_sort(int N, int *v) {

	int i, j, tmp;

	for(i = N-1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if(v[j]> v[j+1]) {
				tmp = v[j];
				v[j] = v[j+1];
				v[j + 1] = tmp;
			}
		}
	}
}

int bin_ricerca(int N, int elemento, int *v){
	int i;
	int pr = 0;
	int ul = N - 1;
	int medio;


	

	while((ul - pr) != 1) {
		
		medio = (pr + ul)/2;
		
		if(v[medio] > elemento) {

			ul = medio;

		} else if(v[medio] < elemento) {

			pr = medio;

		} else {

			printf("Il tuo elemento è alla posizione %d \n", medio+1);
			break;
		}
	}
}

int main() {

	int N;
	int *vettore;
	int elemento;
	int pos;

	printf("Quanto è grande il tuo vettore? \n");
	scanf("%d", &N);

	vettore = alloc(N);

	insvet(N, vettore);

	bubble_sort(N, vettore);

	for( int i = 0; i < N; i++) {

		printf("%d \n", vettore[i]);
	}

	printf("Quale numero vuoi cercare? \n");
	scanf("%d", &elemento);


	bin_ricerca(N, elemento, vettore);

	free(vettore);

}