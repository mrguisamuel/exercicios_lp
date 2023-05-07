#include <stdio.h>

int main() {
	int n, cal, sair = 0;
	
	while(sair == 0) {
		printf("Digite um número: ");
		scanf("%i", &n);
		if(n < 0 || n > 16) {
			printf("Número inválido!\n");
		} else {
			cal = 1;
			for(int i = 1; i <= n; i++) {
				cal *= i;
			}
			printf("%i!: %i\n", n, cal);
			printf("Digite 0 para continuar ou qualquer número para sair: ");
			scanf("%i", &sair);
		}
	}
	return 0;
}
