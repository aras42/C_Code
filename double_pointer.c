#include <stdio.h>
#include <stdlib.h>

int main() {

	double **p;

	p = (double**) malloc(sizeof(double));

	printf("Inserisci un numero: \n");
	scanf("%lf",p);

	printf("Il numero e' %.2f \n",p);

	free(p);


}


