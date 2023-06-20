#include <stdio.h>
#include <string.h>

#define MAX 30

int main() {
	char palavra[MAX];

	printf("Escreva a palavra: ");
	gets(palavra);

	for(int i = strlen(palavra); i >= 0; i--)
		printf("%c", palavra[i]);
	printf("\n");
	return 0;
}
