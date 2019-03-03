/*
  Scrivere un programma che chiede di inserire 2 date nel formato gg/mm/aaaa e stampi la più recente
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

	int gg1,mm1,aaaa1;
	int gg2,mm2,aaaa2;

	printf("Inserisci la prima data\n");
	scanf("%d/%d/%d",&gg1,&mm1,&aaaa1);

	printf("Inserisci la seconda data\n");
	scanf("%d/%d/%d",&gg2,&mm2,&aaaa2);

	if (aaaa1>aaaa2) {

		printf("%d/%d/%d/ e' la data piu' recente", gg1,mm1,aaaa1);
	} else if (aaaa1==aaaa2 && mm1>mm2) {

		printf("%d/%d/%d e' la data piu' recente",gg1,mm2,aaaa2);
	} else if (aaaa1==aaaa2 && mm1==mm2 && gg1>gg2) {

		printf("%d/%d/%d e' la data piu' recente",gg1,mm1,aaaa1);
	} else {

		printf("%d/%d/%d e' la data piu' recente",gg2,mm2,aaaa2);
	}
}
