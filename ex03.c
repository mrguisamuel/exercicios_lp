#include <stdio.h>

#define MAX 4

int main() {
  float notas[MAX], media;
  int i;
  for(i = 0; i < MAX; i++) {
    printf("Nota %i: ", i + 1);
    scanf("%f", &notas[i]);
    media += notas[i];
  }
  media /= MAX;
  printf("Notas: ");
  for(i = 0; i < MAX; i++) {
    printf(" %f", notas[i]);
  }
  printf("\nMédia: %2.f\n", media);
  return 0;
}