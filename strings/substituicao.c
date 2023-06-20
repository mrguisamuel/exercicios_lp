#include <stdio.h>  
#include <string.h>

#define MAX 30
#define MAX_FRASE 100

int main() {
  char frase[MAX_FRASE], string2[MAX], string3[MAX], saida[MAX_FRASE];
  int i = 0, j = 0, achou = 0, n_palavras = 0, comeco, contador = 0;

  printf("Digite a string A: ");
  fgets(frase, MAX_FRASE, stdin);
  frase[strlen(frase) - 1] = '\0';
  
  printf("Digite a string B: ");
  fgets(string2, MAX, stdin);
  string2[strlen(string2) - 1] = '\0';
  
  printf("Digite a string C: ");
  fgets(string3, MAX, stdin);
  string3[strlen(string3) - 1] =  '\0';

  for(i = 0; i < strlen(frase); i++)
  {
    contador = 0;
    for(j = 0; j < strlen(string2); j++) {
      if(frase[i + j] == string2[j]) {
        contador++;
      }
    }

    if(contador == strlen(string2)) {
      n_palavras++;
    }
  }

  j = 0;

  while(contador <= n_palavras) {
    for(i = 0; frase[i] != '\0'; i++) {
      if (frase[i] == string2[j]) {
        if (achou == 0)
          comeco = i;
        j++;
        if (string2[j] == '\0')
          break;
        achou++;
      } 
      else {
        achou = 0;
        comeco = 0;
        j = 0;
      }
    }
    
    for (i = 0; i < comeco; i++)
      saida[i] = frase[i];

    for (j = 0; j < strlen(string3); j++) {
      saida[i] = string3[j];
      i++;
    }
    for (j = comeco + strlen(string2); j < strlen(frase); j++) {
      saida[i] = frase[j];
      i++;
    }
    saida[i] = '\0';
    strcpy(frase, saida);
    contador++;
  }

  if(n_palavras > 0)
    printf("Frase final: %s\n", saida);
  else
    printf("Não foram encontradas palavras para substituir.\n");
  return 0;
}