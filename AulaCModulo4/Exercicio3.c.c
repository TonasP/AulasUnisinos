//exercicio 3
#include <stdio.h>

int main() {
	int notas[20];
	int frequencia[11] = {0};

	printf("Digite as notas de 20 alunos (apenas inteiros entre 0 e 10):\n");


	for(int i = 0; i < 20; i++) {
		int nota;

		do {
			printf("Nota do aluno %d: ", i + 1);
			scanf("%d", &nota);

			if (nota < 0 || nota > 10) {
				printf("Nota invalida! Insira um valor de 0 a 10.\n");
			}
		} while (nota < 0 || nota > 10);


		notas[i] = nota;


		frequencia[nota]++;
	}


	printf("\n--- HISTOGRAMA DE NOTAS ---\n");
	for(int i = 0; i <= 10; i++) {

		printf("Nota %2d: ", i);


		for(int j = 0; j < frequencia[i]; j++) {
			printf("*");
		}


		printf("\n");
	}

	return 0;
}