//exercicio 2
#include <stdio.h>

int main()
{
	int matriz[4][6];

	int frequencia[11] = {0};

	for (int i=0; i<4; i++) {
		for(int j = 0; j<6; j++) {
			int valor;

			do {
				printf("Insira um valor entre 1 e 10 para a posicao [%d][%d]: ", i, j);
				scanf("%d", &valor);
			}while(valor<1 || valor >10);
			matriz[i][j] = valor;

			frequencia[valor]++;
		}
	}



	int max_repeticoes = 0;
	for(int i = 1; i <= 10; i++) {
		if(frequencia[i] > max_repeticoes) {
			max_repeticoes = frequencia[i];
		}
	}
	printf("\n--- RESULTADO ---\n");
	printf("A maior frequencia na matriz foi de %d vez(es).\n", max_repeticoes);
	printf("Numero(s) que mais apareceu(eram): ");

	for(int i = 1; i <= 10; i++) {
		if(frequencia[i] == max_repeticoes) {
			printf("%d ", i);
		}
	}
	printf("\n");

	return 0;
}