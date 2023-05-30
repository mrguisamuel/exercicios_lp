#include <stdio.h>

#define MAX 30

int main() {
	int numeros[MAX], n, i, aparece = 0;
	
	for(i = 0; i < MAX; i++) {
		printf("Digite N[%i]: ", i);
		scanf("%i", &numeros[i]);
	}

	printf("Digite um número qualquer: ");
	scanf("%i", &n);

	for(i = 0; i < MAX; i++) {
		if(numeros[i] == n)
			aparece++;
	}

	printf("O número aparece %i vezes no vetor.\n", aparece);
	return 0;
}
