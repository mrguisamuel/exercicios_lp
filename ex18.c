#include <stdio.h>

int main() {
	int n, n_teste, maior = 0, menor = 0;
	
	printf("Quantos números? ");
	scanf("%i", &n);
	
	for(int i = 0; i < n; i++) {
		printf("Digite um número: ");
		scanf("%i", &n_teste);
		if(i == 0) {
			maior = n_teste;
			menor = n_teste;
		} else {
			if(n_teste > maior) {
				maior = n_teste;
			}
			else {
				if(n_teste < menor)
					menor = n_teste;
			}
		}
	}
	printf("Menor número: %i\n", menor);
	printf("Maior número: %i\n", maior);
	printf("Soma dos números: %i\n", maior + menor);
	return 0;
}
