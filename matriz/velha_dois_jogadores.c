#include <stdio.h>

#define MAX 3

int main() {
	char tabuleiro[MAX][MAX] = {{'*', '*', '*'}, {'*', '*', '*'}, {'*', '*', '*'}};
	int linha, coluna, i, j, tipo_jogador = 0, valido = 0, soma = 0;

	for(i = 0; i < MAX; i++) {
		for(j = 0; j < MAX; j++) {
			printf("%c ", tabuleiro[i][j]);
		}
		printf("\n");
	}

	while(1) {
		if(tipo_jogador == 0)
			printf("Jogador 1...\n");
		else
			printf("Jogador 2...\n");

		printf("Escolha uma linha: ");
		scanf("%i", &linha);
		printf("Escolha uma coluna: ");
		scanf("%i", &coluna);

		if(linha <= MAX && coluna <= MAX) {
			if(tipo_jogador == 0 && tabuleiro[linha - 1][coluna - 1] == '*') {
				tabuleiro[linha - 1][coluna - 1] = 'X';
				tipo_jogador = 1;
				valido = 1;
			}
			else {
				if(tipo_jogador == 1 && tabuleiro[linha - 1][coluna - 1] == '*') {
					tabuleiro[linha - 1][coluna - 1] = 'O';
					tipo_jogador = 0;
					valido = 1;
				}
				else
					valido = 0;
			}
		} else valido = 0;

		if(valido == 1) {
			for(i = 0; i < MAX; i++) {
				for(j = 0; j < MAX; j++) {
					printf("%c ", tabuleiro[i][j]);
				}
				printf("\n");
			}
		} else {
			printf("Posição impossível... Tente novamente!\n");
		}

		for(i = 0; i < MAX; i++) {
			soma = 0;
			for(j = 0; j < MAX; j++) {
				if(tabuleiro[i][j] == 'X') {
					soma++;
				} else {
					if(tabuleiro[i][j] == 'O')
						soma--;
				}
			}
			if(soma == 3) {
				printf("Jogador 1 Vence!\n");
				return 0;
			}
			else {
				if(soma == -3) {
					printf("Jogador 2 Vence!\n");
					return 0;
				}
			}
		}

		for(i = 0; i < MAX; i++) {
			soma = 0;
			for(j = 0; j < MAX; j++) {
				if(tabuleiro[j][i] == 'X') {
					soma++;
				} else {
					if(tabuleiro[j][i] == 'O')
						soma--;
				}
			}
			if(soma == 3) {
				printf("Jogador 1 Vence!\n");
				return 0;
			}
			else {
				if(soma == -3) {
					printf("Jogador 2 Vence!\n");
					return 0;
				}
			}
		}

		for(i = 0; i < MAX; i++) {
			if(tabuleiro[i][i] == 'X') {
				soma++;
			} else {
				if(tabuleiro[i][i] == 'O')
					soma--;
			}
			if(soma == 3) {
				printf("Jogador 1 Vence!\n");
				return 0;
			}
			else {
				if(soma == -3) {
					printf("Jogador 2 Vence!\n");
					return 0;
				}
			}
		}

		soma = 0;
		for(i = 0; i < MAX; i++) {
			for(j = 0; j < MAX; j++) {
				if(tabuleiro[i][j] != '*')
					soma++;
			}
		}

		if(soma == MAX * MAX) {
			printf("Deu velha. Empate!\n");
			return 0;
		}
	}
	return 0;
}
