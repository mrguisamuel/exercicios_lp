#include <stdio.h>

// Considerando 10 dias
#define MAX 10

int main() {
	int temp_inferior, i;
	float media_anual = 0.0, temperaturas[MAX], maior, menor;
	
	for(i = 0; i < MAX; i++) {
		printf("Temperatura média %i: ", i + 1);
		scanf("%f", &temperaturas[i]);
		media_anual += temperaturas[i];
	}

	media_anual /= (float) MAX;

	maior = temperaturas[0];
	menor = temperaturas[0];

	for(i = 0; i < MAX; i++) {
		if(temperaturas[i] > maior)
			maior = temperaturas[i];

		if(temperaturas[i] < menor)
			menor = temperaturas[i];

		if(temperaturas[i] < media_anual)
			temp_inferior++;
	}

	printf("Número de dias com a temperatura menor que a média anual: %i\n", temp_inferior);
	printf("Média anual: %.2f\n", media_anual);
	printf("Maior temperatura: %.2f\n", maior);
	printf("Menor temperatura: %.2f\n", menor);

	return 0;
}
