#include <stdio.h>

#define MAX 10

int main() {
	int A[MAX], X, i;

	for(i = 0; i < MAX; i++) {
		printf("A[%i]: ", i);
		scanf("%i", &A[i]);
	}

	printf("X: ");
	scanf("%i", &X);

	for(i = 0; i < MAX; i++) {
		printf("%i * %i = %i\n", X, A[i], A[i] * X);
	}

	return 0;
}
