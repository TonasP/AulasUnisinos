#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double sortearDouble(int max) {
	return ((double) rand() / RAND_MAX) * max;
}

double calcular_media(double valores[], int tamanho) {
	double soma = 0.0;
	for(int i = 0; i < tamanho; i++) {
		soma = soma + valores[i];
	}
	return soma / tamanho;
}

double encontrar_maximo(double valores[], int tamanho) {
	double valorMax = valores[0];
	for(int i = 1; i < tamanho; i++) {
		if (valores[i] > valorMax) {
			valorMax = valores[i];
		}
	}
	return valorMax;
}

double encontrar_minimo(double valores[], int tamanho) {
	double valorMin = valores[0];
	for(int i = 1; i < tamanho; i++) {
		if (valores[i] < valorMin) {
			valorMin = valores[i];
		}
	}
	return valorMin;
}

void verificar_faixa(double valores[], int tamanho, double limiteMin, double limiteMax) {
	for (int i = 0; i < tamanho; i++) {
		if (valores[i] > limiteMax) {
			printf("Leitura %d: Acima do limite\n", i + 1);
		}
		else if (valores[i] < limiteMin) {
			printf("Leitura %d: Abaixo do limite\n", i + 1);
		}
		else {
			printf("Leitura %d: OK\n", i + 1);
		}
	}
}

void exibir_barra_grafica(double valores[], int tamanho) {
	double valorMedia = calcular_media(valores, tamanho);
	int qtdAsteriscos = (int)valorMedia;

	if (qtdAsteriscos > 20) {
		qtdAsteriscos = 20;
	}

	printf("Intensidade media: %.2f\n", valorMedia);
	printf("[");

	for (int i = 0; i < qtdAsteriscos; i++) {
		printf("*");
	}

	printf("]\n");
}

void exibir_relatorio_completo(double valores[], int tamanho) {
	printf("Relatorio completo:\n");
	for(int i = 0; i < tamanho; i++) {
		printf("Leitura %d: %.2f\n", i + 1, valores[i]);
	}
}
void calcular_desvios(double valores[], int tamanho) {

	double media = calcular_media(valores, tamanho);

	printf("Media de referencia: %.2f\n\n", media);

	for(int i = 0; i < tamanho; i++) {
		double desvio = valores[i] - media;
		printf("Leitura %d: %.2f | Desvio: %.2f\n", i + 1, valores[i], desvio);
	}
}

int main() {
	srand(time(NULL));
	int limiteMaxRand = 2000;
	int quantLeituras;
	double valores[100];
	char novaSimulacao;
	char continuarOperacao;

	do {
		int leitMinMax = 0;
		while (leitMinMax == 0) {
			printf("Insira quantos dados serao lidos (entre 3 e 100):\n");
			scanf("%d", &quantLeituras);

			if (quantLeituras < 3 || quantLeituras > 100) {
				printf("A quantidade de leituras nao condiz com os requisitos minimos ou maximos\n");
				leitMinMax = 0;
			}
			else {
				leitMinMax = 1;
			}
		}

		for (int i = 0; i < quantLeituras; i++) {
			valores[i] = sortearDouble(limiteMaxRand);
		}

		continuarOperacao = 's';
		int opcao = -1;

		while (continuarOperacao == 's' || continuarOperacao == 'S') {
			printf("\n=========================================================\n");
			printf("                       MENU PRINCIPAL                      \n");
			printf("=========================================================\n");
			printf("1 - Calcular media\n");
			printf("2 - Calcular valor maximo e minimo\n");
			printf("3 - Calcular desvio de cada leitura em relacao a media\n");
			printf("4 - Verificar se valores estao dentro de faixa segura\n");
			printf("5 - Exibir barra grafica de intensidade media\n");
			printf("6 - Gerar relatorio completo\n");
			printf("0 - Sair\n");
			printf("---------------------------------------------------------\n");
			printf("Escolha uma opcao: ");

			scanf("%d", &opcao);

			switch (opcao) {
			case 1:
				printf("\n-> Executando: Calcular media...\n");
				printf("Media calculada: %.2f\n", calcular_media(valores, quantLeituras));
				break;

			case 2:
				printf("\n-> Executando: Calcular valor maximo e minimo...\n");
				printf("Valor Maximo: %.2f\n", encontrar_maximo(valores, quantLeituras));
				printf("Valor Minimo: %.2f\n", encontrar_minimo(valores, quantLeituras));
				break;

			case 3:
				printf("\n-> Executando: Calcular desvio de cada leitura em relacao a media...\n");
				calcular_desvios(valores, quantLeituras);
				break;

			case 4:
				printf("\n-> Executando: Verificar se valores estao dentro de faixa segura...\n");
				double min, max;
				printf("Digite o minimo aceitavel: ");
				scanf("%lf", &min);
				printf("Digite o maximo aceitavel: ");
				scanf("%lf", &max);
				verificar_faixa(valores, quantLeituras, min, max);
				break;

			case 5:
				printf("\n-> Executando: Exibir barra grafica de intensidade media...\n");
				exibir_barra_grafica(valores, quantLeituras);
				break;

			case 6:
				printf("\n-> Executando: Gerar relatorio completo...\n");
				exibir_relatorio_completo(valores, quantLeituras);
				break;

			case 0:
				printf("\n-> Saindo do menu...\n");
				continuarOperacao = 'n';
				break;

			default:
				printf("\n-> Opcao INVALIDA! Por favor, digite um numero entre 0 e 6.\n");
				break;
			}

			if (opcao != 0) {
				printf("Deseja realizar outra operacao? (s/n): ");
				scanf(" %c", &continuarOperacao);
			}
		}

		printf("Deseja iniciar nova simulacao? (s/n): ");
		scanf(" %c", &novaSimulacao);

	} while (novaSimulacao == 's' || novaSimulacao == 'S');

	printf("Encerrando sistema...\n");
	return 0;
}