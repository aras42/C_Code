#include <stdio.h>
#include <stdlib.h>

#define N 4
#define M 5


int main() {


	int i, j;
	int mat[N][M];
	int sommapari;

	for(i = 0; i < N; i++) {

		for(j = 0; j < M; j++) {

			printf("Inserisci elemento %d, %d \n",i, j );
			scanf("%d", &mat[i][j]);
		}
	}

	for(i = 0; i < N; i++) {

		printf("\n");

		for(j = 0; j < M; j++){

			printf(" %d ",mat[i][j]);
		}
	}


 // Somma righe pari

	for(i = 0; i < N ; ) {

		for (j = 0; j < M; j ++){

			if(i % 2 == 0){

				sommapari = sommapari + mat[i][j];


			}

			
	}

}

printf("%d", sommapari);
}



