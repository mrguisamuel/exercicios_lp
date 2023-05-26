#include <stdio.h> 

#define MAX 10

int main() {
	int numeros[MAX], i, soma;
	
	for(i = 0; i < MAX; i++) {
		printf("Digite o número na posição %i: ", i + 1);
		scanf("%i", &numeros[i]);
		soma += (numeros[i] * numeros[i]);
	}

	printf("Soma: %i\n", soma);
	return 0;
}
