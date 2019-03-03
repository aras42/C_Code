//Esempio struttura

#include <stdio.h>
#include <string.h>

struct s_libro {

	char autore[50];
	char titolo[50];
	int pagine;
	
}libro3, libro4;

typedef struct s_libro t_libro;

int main(int argc, const char * argv[]) {

	struct s_libro libro1;
	struct s_libro libro2;
	struct s_libro collezione[10];

	t_libro libro5;

	libro1.pagine = 100;

	printf("Il libro uno ha %d pagine \n",libro1.pagine );

	strcpy(libro1.titolo,"Programmazione");

	printf("Il titolo del libro è %s \n",libro1.titolo );

	printf("Inserisci l'autore: \n");
	scanf("%s",libro1.autore);

	printf("L'autore e':  %s \n",libro1.autore);

	t_libro* p;

	p=&libro2;

	libro2.pagine=200;

	printf("Il numero di pagine e': %d \n",(*p).pagine );

	printf("Il numero di pagine e': %d \n",p->pagine ); //utilizzo il puntatore ed accedo ad un
														//campo della variabile puntata da p


}