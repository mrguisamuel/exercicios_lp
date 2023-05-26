#include <stdio.h>

int main() {
  int n, cent, dez, uni;
  do {
    printf("Digite um número menor que 1000: ");
    scanf("%i", &n);

    if(n < 0 || n >= 1000)
      printf("Valor inválido! Digite novamente.\n");
  } while(n < 0 || n >= 1000);

  cent = n/100;
  dez = (n - (cent * 100))/10;
  uni = n - ((dez * 10) + (cent * 100));
  
  if(cent == 1) 
  {
    if(dez == 1 && uni == 1) {
      printf("%i = %i centena, %i dezena e %i unidade\n", n, cent, dez, uni);
    }
    else {
      if(dez == 1) {
        printf("%i = %i centena, %i dezena e %i unidades\n", n, cent, dez, uni);
      } 
      else {
        if(uni == 1) {
          printf("%i = %i centena, %i dezenas e %i unidade\n", n, cent, dez, uni);
        } 
        else {
          printf("%i = %i centena, %i dezenas e %i unidades\n", n, cent, dez, uni);
        }
      }
    }
  }
  else {
    if(dez == 1 && uni == 1) {
      printf("%i = %i centenas, %i dezena e %i unidade\n", n, cent, dez, uni);
    }
    else {
      if(dez == 1) {
        printf("%i = %i centenas, %i dezena e %i unidades\n", n, cent, dez, uni);
      } 
      else {
        if(uni == 1) {
          printf("%i = %i centenas, %i dezenas e %i unidade\n", n, cent, dez, uni);
        } 
        else {
          printf("%i = %i centenas, %i dezenas e %i unidades\n", n, cent, dez, uni);
        }
      }
    }
  }
  return 0;
}