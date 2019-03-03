#include <stdio.h> 
#include <stdlib.h>



int *alloc(int N) {

	int *v;

	v = (int *)malloc(N * sizeof(int));

	if(v == NULL){

		printf("Impossibile allocare memoria \n");
		exit(1);
	}

	return v;
}

void insvet(int N, int *v) {

	for (int i = 0; i < N; i++) {

		printf("Inserisci elemento %d del vettore \n", i + 1 );
		scanf("%d", &v[i]);
		
	}
}


int *merge(int N, int M, int *v1, int *v2) {
	int *v;
	int i;

	for( i = 0; i < N; i++){

		v[i] = v1[i];
	}

	for( i = 0; i < M; i++) {

		v[N + i] = v2[i];
	}

	return v;
}





int main(){

	int *v1;
	int *v2;
	int *v3;
	int N, M, dim;

	printf("Quanti elementi ha il primo vettore? \n");
	scanf("%d", &N);

	printf("Quanti il secondo? \n");
	scanf("%d", &M);

	v1 = alloc(N);
	v2 = alloc(M);
	
	dim = N + M;

	v3 = alloc(dim);

	insvet(N, v1);
	insvet(M, v2);

	v3 = merge(N, M, v1, v2);

	for( int i = 0; i < dim; i++) {

		printf("%d \n", v3[i]);
	}

}