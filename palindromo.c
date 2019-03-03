/* 
  Scrivere un programma in lunguaggio C che riceve in ingresso una parola
  inserita da tastiera. Si consideri che la parola può contenere sia caratteri
  maiuscoli e sia caratteri minuscoli, e complessivamente al massimo 30
  caratteri. Il programma deve svolgere le seguenti operazioni:
  1. Visualizzare la parola inserita
  2. Aggiornare la parola in modo tale che tutti i caratteri siano minuscoli.
     Il programma deve visualizzare la parola ottenuta.
  3. Verificare se la parola è palindroma. Una parola è palindroma se può essere
     letta indifferentemente da sinistra verso destra e da destra verso sinistra.     
*/

#include <stdio.h>
#include <string.h>

#define mx 30

int main () {

	char parola[mx+1];
	unsigned int dim;

	int i;
	int j;
	int palindroma; //flag, 1-> se palindroma; 0-> se non è palindroma

	puts("Inserisci una parola di massimo 30 caratteri: \n");
	gets(parola);

	dim=strlen(parola);

	for(i=0;i<dim;i++) {

		parola[i]=tolower(parola[i]);
	}

	puts(parola);

	//elaborazione

	for(i=0,j=dim-1;i<dim && j>=0 ;i++,j--) {

		if(parola[i]!=parola[j]) {

			palindroma=0;

		} else {

			palindroma=1;
		}
	}

			//output

	if(palindroma==1) {

		puts("Parola palindroma");
	
	}else {

		puts("Parola non palindroma");
	}

}
	


			