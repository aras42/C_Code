/*
	Si realizzi un programma che facendo uso di una funzione cerca, ricerchi 
	la presenza di un elemento in un vettore di interi. La funzione deve ricevere in ingresso tre parametri:
	
		a. un vettore di interi v[] nel quale ricercare il valore;
		b. un valore intero N che indica quanti elementi contiene il vettore;
		c. il valore intero x che deve essere ricercato.
	
	La funzione deve restituire un valore intero, ed in particolare:

		• se il valore x è presente nel vettore, allora la funzione restituisce l’indice della posizione alla quale si trova tale valore;
		• se il valore x è presente più volte, si restituisca l’indice della prima occorrenza;
		• se il valore x non è presente nel vettore, si restituisca -1.
	
	Costruire il grafo di controllo relativo alla funzione cerca; indicare un set di test case utili a testare il comportamento della funzione in
 	corrispondenza di valori di input significativi. Fornire una prova esemplificativa della copertura che il test set è in grado di garantire.
*/


#include <stdio.h>

int main() {

	int *vettore; //punta al elemento del vettore
	int N; //dimensione del vettore
	int x; //elemento da ricercare
	int i; //indice
	int occorrenza;



	printf("Qual è la dimensione del vettore? \n");
	scanf("%d",&N);

	for(i=0; i<N; i++) {

		printf("Inserisci elemento %d \n",i+1);
		scanf("%d",vettore);
	}

	printf("Quale numero vuoi cercare? \n");
	scanf("%d",&x);

	
	for (i=0; i<N; i++) {


		if (x==vettore[i]) {

			occorrenza++;

		}

	}

	printf("Numero di volte:  %d \n", occorrenza );
	 

	  if (occorrenza!=1 & occorrenza!=0) {

		printf("Il numero di volte che %d viene ripetuto e' %d \n", x, occorrenza );

	} else if (occorrenza==1) {

		printf("%d si trova alla posizione %d del vettore \n",x, i);

	}else if(occorrenza==0) {

		printf("-1 \n");
	}  	




}
