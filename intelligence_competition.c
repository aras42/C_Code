/*
  In un concorso di intelligenza N giudici esprimono il loro giudizio su K candidati.
  Il giudizio è un valore numerico tra 0 e 5.
  Si scriva un programma in C per determinare il candidato più intelligente
  ed il giudice più severo.
*/

#include <stdio.h>

#define mxc 50
#define mxg 10

int main() {

	int voto[mxg][mxc];
	int N;
	int K;

	int i;
	int j;

	int piusevero=0;
	int piuintelligente=0;

	int maxInt=0; //somma di voti del più intelligente
	int minSev=99999; //somma dei voti del più severo
	int tot; // totale dei voti(locale) dei giudici e dei candidati 

	puts("Quanti sono i giudici? \n");
	scanf("%d",&N);

	puts("Quanti sono i candidati? \n");
	scanf("%d",&K);

	for(i=0;i<N;i++) {

		printf("Giudice n %d \n",i+1);

		for(j=0;j<K;j++) {

			printf("candidato n %d, voto \n", j+1 );
			scanf("%d",&voto[i][j]);
		}
	}
    for(i=0;i<N;i++) {

		printf("\n");

		for(j=0;j<K;j++) {

			printf("%d ",voto[i][j]);
		}
	}

	//cerco il giudice più severo

	for(i=0;i<N;i++) {

		tot=0;

		for(j=0;j<K;j++) {

			tot=tot+voto[i][j];
		}

		if(tot < minSev) {

			piusevero=i;
			minSev=tot;
		}
	}

	//cerco il candidato più intelligente

	for(j=0;j<N;j++) {

		tot=0;

		for(i=0;i<K;i++) {

			tot=tot+voto[i][j];
		}

		if(tot > maxInt) {

			piuintelligente=j;
			maxInt=tot;
		}
	}

	printf("\n Il gudice piu' severo e': %d \n\n",piusevero+1);
	printf("Il candidato piu' intelligente e': %d \n\n",piuintelligente+1 );
}