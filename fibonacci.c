/*

  Scrivere un programma in linguaggio C che calcoli e stampi i primi N numeri della seria di Fibonacci,
  con N inserito da tastiera.

  La serie di Fibonacci inizia con 1, 1 ed ogni numero
  successivo è dato dalla somma dei due precedenti: 1, 1, 2, 3, 5, 8, 13, 21...

*/

#include <stdio.h>

int main(){

	int N;
	int i;
	int tmp;
	int precedente1=1;
	int precedente2=1;

	printf("Inserisci N \n");
	scanf("%d",&N);

	if (N==1) {

		printf("%d \n",precedente1);

	} else if(N==2) {

		printf("%d\n%d\n",precedente1,precedente2);

	}else {

		printf("%d\n\%d\n",precedente1,precedente2);

		for(i=0;i<N-2;i++) {

			printf("%d \n",precedente1+precedente2);
			tmp=precedente1;
			precedente1=precedente1+precedente2;
			precedente2=tmp;
		}
	}
}