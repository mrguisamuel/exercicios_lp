#include <stdio.h>

#define MAX 10

/*
Tabela ASCII
A = 65
E = 69
I = 73
O = 79
U = 85
a = 97
e = 101
i = 105
o = 111
u = 117
*/

int main() {
  char consoantes[MAX];
  char entradaCons;
  int totalConsoantes = 0;
  int i;
  for(i = 0; i < MAX; i++) {
    printf("Digite a letra: ");
    scanf(" %c", &entradaCons);
    if(entradaCons != 65 && entradaCons != 69 && entradaCons != 73 && entradaCons != 79 && entradaCons != 85 && entradaCons != 97 && entradaCons != 101 && entradaCons != 105 && entradaCons != 111 && entradaCons != 117) {
      totalConsoantes++;
      consoantes[i] = entradaCons;
    }
  }
  printf("Número de consoantes: %i\n", totalConsoantes);
  for(i = 0; i < MAX; i++) {
    printf("%c ", consoantes[i]);
  }
  printf("\n");
  return 0;
}
