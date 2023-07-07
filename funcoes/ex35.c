#include <stdio.h>

int guistrlen(char[]);
int guistrcmp(char[], char[]);
void guistrcpy(char[], char[]);

int main() {
  char teste[] = "teste";
  char teste2[] = "legal";
  
  printf("Minha string é %s\n", teste);
  printf("strlen: %i\n", guistrlen(teste));
  printf("Vou comparar com a string %s\n", teste2);
  printf("strcmp: %i\n", guistrcmp(teste, teste2));
  guistrcpy(teste, teste2);
  printf("String copiada:\n");
  printf("%s\n", teste);
  
  return 0;
}

int guistrlen(char string[]) {
  int contador = 0;
  for(int i = 0; string[i] != '\0'; i++) {
    contador++;
  }
  return contador;
}

int guistrcmp(char string1[], char string2[]) {
  if(guistrlen(string1) != guistrlen(string2)) {
    return 0;
  } else {
    for(int i = 0; i < guistrlen(string1); i++) {
      if(string1[i] != string2[i])
        return 0;
    }
  }
  return 1;
}

void guistrcpy(char string1[], char string2[]) {
  int max = 0;
  if(guistrlen(string1) > guistrlen(string2))
    max = guistrlen(string1);
  else max = guistrlen(string2);
  
  for(int i = 0; i < max; i++) {
    string1[i] = string2[i];
  }
}