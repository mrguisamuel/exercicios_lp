#include <stdio.h>

#define MAX 50

int main() {
	int VET[MAX], i, j, teste = 0;
	
	for(i = 0; i < MAX; i++) {
		printf("Digite VET[%i]: ", i);
		scanf("%i", &VET[i]);
	}
	
	printf("Posições repetidas: ");

	for(i = 0; i < MAX; i++) {
		for(j = i + 1; j < MAX; j++) {
			if(VET[i] == VET[j]) {
				teste = 1;
				printf("%i ", i);
				break;
			}
		}
	}

	if(teste == 0)
		printf("Nenhuma.");
	printf("\n");
	return 0;
}
