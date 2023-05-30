#include <stdio.h>

int main() {
	int n, i;
	
	printf("Digite o valor de N: ");
	scanf("%i", &n);

	int A[n], B[n];
	
	for(i = 0; i < n; i++) {
		printf("Digite A[%i]: ", i);
		scanf("%i", &A[i]);
	}

	for(i = 0; i < n; i++) {
		printf("Digite B[%i]: ", i);
		scanf("%i", &B[i]);
	}
	
	for(i = 0; i < n; i++) {
		printf("A[%i] + B[%i] = %i\n", i, i, A[i] + B[i]);
	}

	return 0;
}
