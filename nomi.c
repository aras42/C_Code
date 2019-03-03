/*
  Un programma legge dall'utente una serie di nomi di persona. L'inserimento termina qualdo
  l'utente immette il nome fasullo *.
  Il programma dovrà stampare:
  1.quanti nomi sono stati inseriti
  2.qual è il nome che, nell'ordine alfabetico, verrebbe per primo
  3.qual è il nome più lungo, e di quanti caratteri è composto
 */

#include <stdio.h>
#include <string.h>

#define mx 20

int main () {

	char nome[mx];

	int tot=0; //totale inserimenti

	char primo[mx];
	char lungo[mx];
	int dimpiulungo=0;
	int stop=0; //flag

	//input

	do {

	printf("Inserisci un nome: \n");
	scanf("%s",nome);

	if(strcmp(nome,"*")==0) {

		stop=1;

	}

	if(stop==0) {

		if(tot==0) {

			strcpy(primo,nome);
			strcpy(lungo,nome);
			dimpiulungo = strlen(nome);
			tot++;
		}else {

			if(strcmp(nome,primo)<0) {

				strcpy(primo,nome);

			}
			if(strlen(nome) > dimpiulungo) {

				dimpiulungo=strlen(nome);
				strcpy(lungo,nome);
			}
			tot++;
		}

	}

}while(stop!=1);

printf("Il nome più lungo e' %s ed e' composto da %d caratteri \n",lungo,dimpiulungo );
printf("Il primo nome e' %s \n",primo );
printf("Il nomi totali inseriti sono: %d \n",tot );
}