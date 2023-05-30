#include <stdio.h>

#define MAX 20

int main() {
	int numeros[MAX], i;

	for(i = 0; i < MAX; i++) {
		printf("Número %i: ", i + 1);
		scanf("%i", &numeros[i]);
	}

	for(i = MAX - 1; i >= 0; i--) {
		printf("[%i]: %i\n", i, numeros[i]); 
	}

	return 0;
}
