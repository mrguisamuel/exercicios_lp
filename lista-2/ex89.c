#include <stdio.h>

#define MAX 15

int main() {
	int V1[MAX], V2[MAX], i, mesma_pos;

	for(i = 0; i < MAX; i++) {
		printf("Digite V1[%i]: ", i);
		scanf("%i", &V1[i]);
	}

	for(i = 0; i < MAX; i++) {
		printf("Digite V2[%i]: ", i);
		scanf("%i", &V2[i]);
	}

	for(i = 0; i < MAX; i++) {
		for(int j = 0; j < MAX; j++) {
			if(V1[i] == V2[j] && i == j)
				mesma_pos++;
		}
	}

	printf("Mesma posição: %i\n", mesma_pos);
	return 0;
}
