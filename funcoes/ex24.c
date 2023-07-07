#include <stdio.h>

int fatorial(int);
float combinacoes(int, int);

int main() {
  int n, r;
  float c;
  printf("Digite o primeiro número: ");
  scanf("%i", &n);
  printf("Digite o segundo número: ");
  scanf("%i", &r);
  c = combinacoes(n, r);
  printf("Número de combinações: %f\n", c);
  return 0;
}

int fatorial(int n) {
  int contador = 1;
  for(int i = 1; i <= n; i++)
    contador *= i;
  return contador;
}

float combinacoes(int n, int r) {
  return fatorial(n)/(fatorial(r) * fatorial(n - r));
}