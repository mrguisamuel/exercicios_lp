#include <stdio.h>

int soma(int);

int main() {
  int n, resultado;
  printf("Digite um número: ");
  scanf("%i", &n);
  resultado = soma(n);
  printf("Resultado: %i\n", resultado);
  return 0;
}

int soma(int n) {
  int soma = 0;
  for(int i = 0; i <= n; i++) {
    soma += i;
  }
  return soma;
}