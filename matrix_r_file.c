#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define R 20 
#define C 20
void lettura(char file[], int matrice[][C], int *righe, int *colonne);
void stampa(int matrice[][C], int righe, int colonne);

int main() {

	int marice [R][C];
	char file[20];
	int righe, colonne;

	printf("Inserisci il nome del file da aprire :\n");
	scanf("%s",file);

	lettura(file,matrice,&righe,&colonne);

	return 0;
}



void lettura(char file[],int matrice[][C], int *righe, int *colonne) {
FILE *fp;

int r,c,i,j;


fp= fopen(file.txt, "r"); //apertura del file
fscanf(fp,"%d",&r); // lettura numero di righe
fscanf(fp,"%d",&c); // lettura numero di colonne

*righe=r;
*colonne=c;

/* Lettura della matrice elemento per elemento */

for(i=0;i<r;i++) {

	for(j=0;j<c;j++) {

		fscanf(fp,"%d", &matrice[i][j]);
	}
}

fclose(fp);

}

void stampa(int matrice [][C], int righe, int colonne) {


	int i,j;

	for(i=0;i<righe;i++) {

		printf("\n");

		for(j=0;j<colonne;j++) {

			printf("%d  ",matrice[i][j]);
		}
	}
}