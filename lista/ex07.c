#include <stdio.h> 

#define MAX 10

int main() {
	int numeros[MAX], i, soma, multi = 1;
	
	for(i = 0; i < MAX; i++) {
		printf("Digite o número na posição %i: ", i + 1);
		scanf("%i", &numeros[i]);
		soma += numeros[i];
		multi *= numeros[i];
	}

	printf("Soma: %i\n", soma);
	printf("Multiplicação: %i\n", multi);
	printf("Números: \n");
	for(i = 0; i < MAX; i++) {
		printf("%i ", numeros[i]);
	}
	printf("\n");

	return 0;
}
