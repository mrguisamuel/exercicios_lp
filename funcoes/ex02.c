#include <stdio.h>

int divisao(int, int);
int multiplicacao(int, int);

int main() {
  int valor, p1, p2;
  printf("Primeiro valor: ");
  scanf("%d", &p1);
  printf("Segundo valor: ");
  scanf("%d", &p2);
  valor = divisao(p1, p2);
  printf("%i\n", valor);
  return 0;
}

int divisao(int a, int b) {
  int i = 0, encontro = 0, inverter = 0, resto;
  
  if(a < 0) {
    a *= -1;
    inverter++;
  }
  else if(b < 0) {
    b *= -1;
    inverter++;
  }
  
  while(1){
    if(a - multiplicacao(b, i) == 0) {
      resto = 0;
      break;
    }
    else {
      if(a - multiplicacao(b, i) < 0 || a - multiplicacao(b, i + 1) < 0) {
        resto = b * (i - 1);
        break;
      }
      else {
        i++;
      }
    }
  }
  
  if(inverter % 2 == 0)
    return i;
  else
    return -i;
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