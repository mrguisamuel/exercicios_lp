#include <stdio.h>
#include <string.h>

#define MAX 10

int main() {
	char string1[MAX], string2[MAX];
	int aux = 0, i, caracteres, acabou = 0;

	printf("Escreva String 1: ");
	//fgets(string1, MAX, stdin);
	scanf("%s", string1);

	printf("Escreva String 2: ");
	//fgets(string2, MAX, stdin);
	scanf("%s", string2);

	caracteres = strlen(string1) + strlen(string2) + 2;

	for(i = 0; i < caracteres; i++) {
		if(i % 2 == 0)
			printf("%c", string1[i - aux]);
		else {
			aux++;
			printf("%c", string2[i - aux]);
		}
	}
	printf("\n");
	return 0;
}
