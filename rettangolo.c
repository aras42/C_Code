/*

  Chiedere 2 numeri interi(a,b) e disegnare un rettangolo che abbia la dimensione axb
  usando il carattere "*"

*/

#include <stdio.h>

int main() {

	int a;
	int b;
	int i;
	int j;

	printf("Inserisci altezza: \n");
	scanf("%d",&a);

	printf("Inserisci base: \n");
	scanf("%d",&b);

	for(i=0;i<a;i++) {

		printf("\n");

		for(j=0;j<b;j++) {

			printf("*");
		}

	}

} 

