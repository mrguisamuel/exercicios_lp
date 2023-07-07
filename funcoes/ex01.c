#include <stdio.h>

int multiplicacao(int, int);

int main() {
  int valor, p1, p2;
  printf("Primeiro valor: ");
  scanf("%d", &p1);
  printf("Segundo valor: ");
  scanf("%d", &p2);
  valor = multiplicacao(p1, p2);
  printf("%i\n", valor);
  return 0;
}

int multiplicacao(int a, int b) {
  int soma = 0;
  if(b < 0) {
    for(int i = 0; i > b; i--) {
      soma -= a;
    }
  } else {
    for(int i = 0; i < b; ++i)
      soma += a;
  }
  return soma;
}