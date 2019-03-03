/*
	Si realizzi un programma che, data una sequenza di N interi da standard input, facendo uso di una funzione medias, 
	calcoli la media aritmetica di tutti i valori di segno uguale all’ultimo valore della sequenza.  
*/

#include <stdio.h>
#include <stdlib.h>

int dim(int argc, char *argv[]) {
	int N;

	if (argc >= 2) {
		N = atoi(argv[1]);
		if (N == 0) {
			printf("Non hai inserito un intero o hai inserito 0 \n");
			exit(1);
		}
	} else {
		printf("Non hai impostato la dimensione \n");
		exit(1);
	}

	return N;
}

int *allv(int N) {
	int *v;

	v = (int *)malloc(N * sizeof(int));

	if (v == NULL) {
		printf("Impossibile allocare memoria \n");
		exit(1);
	}

	return v;
}

void insvet(int N, int *v) {
	int i;

	for (i = 0; i < N; i++) {
		printf("Inserisci elemento %d \n", i + 1);
		scanf("%d", &v[i]);
	}
}

int medias(int N, int *v) {
		int somma = 0;
		int media;
		int i;
		int occ = 0;

		if(v[N-1] > 0) {
			for(i = 0; i < N; i++) {
				if(v[i] > 0) {
					occ++;
					somma = somma + v[i];
				} 
			}
		}else if(v[N-1] < 0) {
			for (i = 0; i < N; i++){
				if(v[i] < 0) {
					occ++;
					somma = somma + v[i];
				}
			}
		}
		
		media = somma / occ;
		return media;
}

int main(int argc, char *argv[]) {

	int N = dim(argc, argv);
	int *numeri = NULL;
	int media;

	numeri = allv(N);

	insvet(N, numeri);

	media = medias(N, numeri);

	printf("La media è %d \n", media);
	
	free(numeri);
}
