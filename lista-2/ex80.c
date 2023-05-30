#include <stdio.h>

#define MAX 20

int main() {
	int Q[MAX], i = 0, maior, posicao;

	do {
		printf("Q[%i]: ", i);
		scanf("%i", &Q[i]);

		if(Q[i] >= 0) {
			if(i == 0) {
				maior = Q[i];
				posicao = i;
			}
			else {
				if(Q[i] >= maior) {
					maior = Q[i];
					posicao = i;
				}
			}
			i++;
		} else {
			printf("Valor inválido! Digite novamente!\n");
		}

	} while(i < MAX);
	
	printf("Maior elemento: %i\n", maior); 
	printf("Posição do elemento: %i\n", posicao); 

	return 0;
}
