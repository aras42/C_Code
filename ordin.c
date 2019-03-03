#include <stdio.h>
#include <stdlib.h>

int main() {

	int N = 5;
	int v[N];
	
	int i, j, tmp;
	
	for( i = 0; i < N; i++) {

		printf("Inserisci \n");
		scanf("%d", &v[i]);
	}


	

	for(i = N-1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if(v[j]> v[j+1]) {
				tmp = v[j];
				v[j] = v[j+1];
				v[j + 1] = tmp;
			}
		}
	}

	for (i = 0; i < N; i++)
	{
		printf("%d \n", v[i]);
	}
}

