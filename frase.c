/*
  Scrivere un programma in liguaggio C che legga una frase introdotta da tastiera. La
  frase è terminata dall'introduzione del carattere di invio. La frase contiene sia 
  caratteri maiuscoli e sia caratteri minuscoli, e complessivamente al più 100 caratteri.
  Il programma deve svolgere le seguenti operazioni:
  1. visualizzare la frase inserita
  2.costruire una nuova frase t.c. ogni lettera vocale presente nella frase di partenza sia 
  seguita dalla lettera 'f'(se la vocale è minuscola) o dalla lettra 'F'
  (se la vocale è maiuscola) nella nuova frase. Il programma deve memorizzare
  la nuova frase in un'opportuna variabile.
  3.visualizzare la nuova frase 
*/

#include <stdio.h>
#include <string.h>

#define mx 100

int main() {

	char frase[mx];

	int i;
	int j=0;

	long int dim;
	char ris[mx*2];



	puts("Scrivi una frase:\n");
	gets(frase);

	dim=strlen(frase);

	if(dim <= mx) {

		printf("%s\n",frase);
	}

	for(i=0;i<dim;i++) {

		ris[j]=frase[i];
		j++; 

		if(frase[i]=='a' || frase[i]=='e' || frase[i]=='i' || frase[i]=='o' || frase[i]=='u') {

			ris[j]='f';
			j++;
		}
		if(frase[i]=='A' || frase[i]=='E' || frase[i]=='I' || frase[i]=='O' || frase[i]=='U'){

			ris[j]='F';
			j++;
		}

	}
	
	ris[j]=0;

	puts(ris);


}
