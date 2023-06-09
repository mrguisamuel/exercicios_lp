#include <stdio.h>

#define LINHAS 2
#define COLUNAS 2

int main() {
	int mat[LINHAS][COLUNAS];
	int somalinha[LINHAS];
	int total;
	int i, j;

	for(i = 0; i < LINHAS; i++) {
		for(j = 0; j < COLUNAS; j++) {
			printf("Posição [%i][%i]: ", i, j);
			scanf("%i", &mat[i][j]);
		}
	}
	
	for(i = 0; i < LINHAS; i++) {
		for(j = 0; j < COLUNAS; j++) {
			somalinha[i] += mat[i][j];
		}
	}

	for(i = 0; i < LINHAS; i++) {
		total += somalinha[i];
	}

	printf("Total: %i\n", total);

	return 0;
}
