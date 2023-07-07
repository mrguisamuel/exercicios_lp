#include <stdio.h>

int inverter(int);

int main() {
  int valor;
  printf("Digite o número: ");
  scanf("%d", &valor);
  printf("Inverso: %i\n", inverter(valor));
  return 0;
}

int inverter(int numero) {
  int ultimo = 0, inverso;
  while(numero != 0) {
    ultimo = numero % 10;
    inverso = (inverso * 10) + ultimo;
    numero /= 10;
  }
  return inverso;
}