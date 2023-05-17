#include <stdio.h>

int main() {
  int n;
  float h = 0;
  printf("Digite o valor de N: ");
  scanf("%i", &n);
  for(int i = 1; i <= n; i++) {
    h += (float)1/i;
  }
  printf("Valor de H: %2.f\n", h);
  return 0;
}