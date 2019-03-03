/*
	Si realizzi un programma che implementi il Crivello di Eratostene per determinare i numeri primi compresi tra 2 e max_d. 
	Il programma deve invocare una funzione denominata crivelloEratostene dal programma main, la quale, 
	dato un vettore con tutti gli elementi precedentemente inizializzati a 1, partendo dall’indice due del vettore, 
	qualora il valore dell’elemento di tale indice sia uno, deve scorrere il resto del vettore e azzerare gli elementi 
	i cui indici sono multipli di quello dell’elemento puntato (Nel caso dell’indice due, saranno ad esempio azzerati gli indici 4,6,8,10,… ). 
	Nel momento in cui questo processo sarà stato completato, stampare a video i numeri primi richiesti, 
	corrispondenti agli elementi del vettore con valore uno.
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int dim(int argc, char *argv[]) {
	int n;

	if (argc >= 2) {
		n = atoi(argv[1]);
		if (n == 0) {
			printf("Non hai inserito un intero o hai inserito 0 \n");
			exit(1);
		}
	} else {
		printf("Non hai impostato la dimensione \n");
		exit(1);
	}

	return n;
}

int *allov(int n) {
	int *v;

	v = (int *)malloc(n * sizeof(int));

	int i;
	for (i = 0; i < n; i++)	{
		v[i] = 1;
	}

	return v;
}

int crivelloEratostene(int n, int *v) {
	int r;

	for (int i = 2; i < n; i++) {
		
		if(v[i] == 1) {

			for(int j = i * i; j < n; j += i) {

				v[j] = 0;
			}
		}
	}

	for (int i = 1; i < n; i++) {

		if(v[i] != 0 ) {

			printf("%d \n", i);
		}
	}
}

int main(int argc, char *argv[]){

	int n;
	int *v;
	struct timeval inizio, fine;
	long secondi, micsec;

	gettimeofday(&inizio, NULL);

	n = dim(argc, argv);

	v = allov(n);

	crivelloEratostene(n, v);

	gettimeofday(&fine, NULL);

	secondi = fine.tv_sec - inizio.tv_sec;
	micsec = ((secondi * 1e6) + fine.tv_usec) - inizio.tv_usec;

	printf("Microsecondi trascorsi: %ld \n", micsec);

	free(v);
}
