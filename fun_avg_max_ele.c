/*
	Si realizzi un programma che dati due vettori in input da tastiera, facendo uso di una funzione avg_max_ele, 
	calcoli e stampi a video il valore medio tra il massimo del primo vettore e il massimo del secondo.
*/

#include <stdio.h>
#include <stdlib.h>

void insvet(int N, int *v) {
	int i;

	for (i = 0; i < N; i++) {
		printf("Inserisci elemento %d \n", i + 1);
		scanf("%d", &v[i]);
	}
}

int max(int N, int *v) {
	int i;
	int max = v[0];

	for (i = 1; i < N; i++) {
		if (max < v[i]) {
			max = v[i];
		}
	}

	return max;
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

int main(int argc, char *argv[]) {
	int N = dim(argc, argv);
	int *v1 = NULL; 
	int *v2 = NULL;
	int max1;
	int max2;
	int vm; //valor medio

	v1 = allv(N);
	v2 = allv(N);

	insvet(N, v1);
	insvet(N, v2);

	max1 = max(N, v1);
	max2 = max(N, v2);
	printf("Il massimo di v1 è %d e di v2 è %d \n", max1, max2);

	vm = (max1 + max2) / 2;
	printf("Il valor medio tra i massimi dei due vettori e' %d \n", vm);

	free(v1);
	free(v2);

	return 0;
}