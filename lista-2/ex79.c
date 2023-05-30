#include <stdio.h>

#define MAX 20

int main() {
	int nota_acima, i;
	float media_turma = 0.0, notas[MAX];
	
	for(i = 0; i < MAX; i++) {
		printf("Nota Aluno %i: ", i + 1);
		scanf("%f", &notas[i]);
		media_turma += notas[i];
	}

	media_turma /= (float) MAX;

	for(i = 0; i < MAX; i++) {
		if(notas[i] >= media_turma)
			nota_acima++;
	}

	printf("Alunos com nota acima da média: %i\n", nota_acima);
	printf("Média da turma: %.2f\n", media_turma);

	return 0;
}
