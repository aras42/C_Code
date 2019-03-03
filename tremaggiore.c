/*

  Si scriva un programma in linguaggio C che acquisisca tre numeri interi a tastieraa e:
  1. determini, stampando un messaggio opportuno quale dei tre numeri sia maggiore
  2.stampi il valore di tale numero
  si trascuori il caso in cui i tre numeri siano uguali

*/

#include <stdio.h>

int main() {

	int a;
	int b;
	int c;

	printf("Inserisci il primo numero: \n",a);
	scanf("%d",&a);
	printf("Inserisci il secondo numero: \n",b);
	scanf("%d",&b);
	printf("Inserisci il terzo numero: \n",c);
	scanf("%d",&c);

// Caso in cui sia a il maggiore

	if (a>b && a>c) {

		printf("Il numero piu' grande e': %d\n",a);

	}else if(b>a && b>c) {

		printf("Il numero piu' grande e' %d\n",b);
	}else {

		printf("Il numero piu' grande e': %d\n",c);
	}

}