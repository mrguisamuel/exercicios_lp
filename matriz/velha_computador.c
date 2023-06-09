#include <stdio.h>
#include <time.h>

#define MAX 3

int main() {
	char tabuleiro[MAX][MAX] = {{'*', '*', '*'}, {'*', '*', '*'}, {'*', '*', '*'}};
	int linha, coluna, i, j, tipo_jogador = 0, valido = 0, soma = 0, ganhou = 0;

	for(i = 0; i < MAX; i++) {
		for(j = 0; j < MAX; j++) {
			printf("%c ", tabuleiro[i][j]);
		}
		printf("\n");
	}

	while(ganhou == 0) {
		if(tipo_jogador == 0) {
			printf("Escolha uma linha: ");
			scanf("%i", &linha);
			printf("Escolha uma coluna: ");
			scanf("%i", &coluna);
		}
		else {
			srand(time(NULL));
			linha = (rand()%3) + 1;
			coluna = (rand()%3) + 1;
		}

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

		if(valido == 1 && tipo_jogador == 0) {
			for(i = 0; i < MAX; i++) {
				for(j = 0; j < MAX; j++) {
					printf("%c ", tabuleiro[i][j]);
				}
				printf("\n");
			}
		} else {
			if(tipo_jogador == 0)
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
				printf("Jogador Vence!\n");
				ganhou = 1;
			}
			else {
				if(soma == -3) {
					printf("Computador Vence!\n");
					ganhou = 1;
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
				printf("Jogador Vence!\n");
				ganhou = 1;
			}
			else {
				if(soma == -3) {
					printf("Computador Vence!\n");
					ganhou = 1;
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
				printf("Jogador Vence!\n");
				ganhou = 1;
			}
			else {
				if(soma == -3) {
					printf("Computador Vence!\n");
					ganhou = 1;
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

	for(i = 0; i < MAX; i++) {
		for(j = 0; j < MAX; j++) {
			printf("%c ", tabuleiro[i][j]);
		}
		printf("\n");
	}

	return 0;
}
