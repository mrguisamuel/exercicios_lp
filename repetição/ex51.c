#include <stdio.h>

int main() {
  int n, par, impar;
  float soma = 0;
  printf("Digite o valor de N: ");
  scanf("%i", &n);
  
  for(int i = 1, j = 1; i <= n; i++, j+=2) {
    soma += (float)i/j;
    printf("%i/%i ", i, j);
  }
  printf("\nResultado: %f\n", soma);
  return 0;
}