#include <stdio.h>

int potenciacao(int, int);

int main() {
  int valor, p1, p2;
  printf("Primeiro valor: ");
  scanf("%d", &p1);
  printf("Segundo valor: ");
  scanf("%d", &p2);
  valor = potenciacao(p1, p2);
  printf("%i\n", valor);
  return 0;
}

int potenciacao(int base, int expoente) {
  int valor = 1;
  if(expoente == 0)
    return 1;
  for(int i = 0; i < expoente; i++) {
    valor *= base;
  }
  return valor;
}