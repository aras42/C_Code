/*
	Si realizzi un programma che esegua il merge di due array ordinati.
*/

#include <stdio.h>
#include <stdlib.h>

// imposta la dimensione del vettore

int dim(int argc, char *argv[]) {
	int N;

	if(argc >= 2) {
		N = atoi(argv[1]);

		if(N == 0) {
			printf("Hai inserito 0 o non hai inserito un numero intero \n");
			exit(1);
		}else {
			printf("Non hai impostato la dimensione \n");
			exit(1);
		}
	}
	return N;
}

// alloca spazio in memoria

int *allov(int N) {
	int *v;

	v = (int *)malloc(N * sizeof(int));

	if(v == NULL){
		printf("Impossibile allocare memoria \n");
		exit(1);
	}
	return v;
}

// inserisce gli elementi del vettore

void insvet(int N, int *v) {
	for (int i = 0; i < N; i++)	{
		printf("Inserisci elemento %d del vettore \n", i + 1);
		scanf("%d",&v[i]);
	}
}

// ordinamento di un vettore

void merge(int *v, int inizio, int centro, int fine, int N) {
	int i, j, k;
	int app[N];

	i = inizio;
	j = centro + 1;
	k = 0;

	while((i <= centro) && (j <= fine)) {
		if(v[i] < v[j]) {
			app[k++] = v[i++];
		} else {
			app[k++] = v[j++];
		}
	}

	while(i <= centro)
		app[k++] = v[i++];
	
	while(j <= fine)
		app[k++] = v[j++];

	for(k = inizio; k <= fine; k++)
		v[k] = app[k - inizio];

} 

int main(){


}
