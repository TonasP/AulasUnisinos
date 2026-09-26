#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double sortearDouble(int max) {
	return ((double) rand() / RAND_MAX) * max;
}

//(serve para todas as funções que tem esses parametros)
// valores[] pega o valor gerado pela função de numero aleatório
// tamanho pega o limite de valores definido pelo usuário no inicio do menu
double calcular_media(double valores[], int tamanho) {
	//inicia em 0.0 para não iniciar como lixo
	double soma = 0.0;
	for(int i = 0; i < tamanho; i++) {
		//pega o antigo valor do soma e faz a adição com o valor atual do valores[i]
		//definindo o valor de soma como o resultado da adição
		soma = soma + valores[i];
	}
	return soma / tamanho;
}

double encontrar_maximo(double valores[], int tamanho) {
	//inicia como o primeiro valor do valores[], evitando iniciar em 0
	//para que o valor maximo nunca seja 2000 (limite definido pelo professor) por engano
	double valorMax = valores[0];

	for(int i = 1; i < tamanho; i++) {
		if (valores[i] > valorMax) {
			valorMax = valores[i];
			//se o valor atual (valores[i]) for maior que o valor maximo definido
			//substitui o valor maximo definido pelo atual (valores[i])
		}
	}
	return valorMax;
}

double encontrar_minimo(double valores[], int tamanho) {
	//inicia como o primeiro valor do valores[], evitando iniciar em 0
	//para que o valor minimo nunca seja 0 por engano
	double valorMin = valores[0];
	for(int i = 1; i < tamanho; i++) {
		if (valores[i] < valorMin) {
			valorMin = valores[i];
			//se o valor atual (valores[i]) for menor que o valor minimo definido
			//substitui o valor minimo definido pelo atual (valores[i])
		}
	}
	return valorMin;
}
// limiteMin e Max é definido pelo usuário quando ele seleciona a opção
void verificar_faixa(double valores[], int tamanho, double limiteMin, double limiteMax) {
	for (int i = 0; i < tamanho; i++) {
		if (valores[i] > limiteMax) {
			//o %d chama o valor no final do printf (i+1)
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
	//chama a função de calcular média que foi criada no "inicio do código"
	double valorMedia = calcular_media(valores, tamanho);
	//define a quantidade de asteriscos
	//como não é possível fazer, por exemplo, meio asterisco
	//transforma o valor que era double em int, fazendo um 7.8 virar um 7 e assim segue
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
		//somente exibe todos os valores gerados em lista
		printf("Leitura %d: %.2f\n", i + 1, valores[i]);
	}
}
void calcular_desvios(double valores[], int tamanho) {
	//chama a função de calcular média que foi criada no "inicio do código"
	double media = calcular_media(valores, tamanho);
	//mostra ao usuário a média para referencia
	printf("Media de referencia: %.2f\n\n", media);

	for(int i = 0; i < tamanho; i++) {
		//pega os valores gerados e subtrái pela média calculada
		double desvio = valores[i] - media;
		//exibe o valor gerado / resultado da subtração
		printf("Leitura %d: %.2f | Desvio: %.2f\n", i + 1, valores[i], desvio);
	}
}

int main() {
	srand(time(NULL));//seed obrigatória para a geração de valores
	//define o limite maximo do numero na função de gerar numeros aleatorios
	int limiteMaxRand = 2000;
	int quantLeituras;
	double valores[100];
	//define a variavel para verificar se o usuário quer gerar novos numeros
	char novaSimulacao;
	//define a variavel para verificar se o usuário quer realizar outra operação do menu
	char continuarOperacao;
	//inicia  o menu
	do {
		int leitMinMax = 0;
		//define uma repetição caso o usuário insira um valor que não condiza com os limites min e max
		while (leitMinMax == 0) {
			printf("Insira quantos dados serao lidos (entre 3 e 100):\n");
			scanf("%d", &quantLeituras);

			if (quantLeituras < 3 || quantLeituras > 100) {
				printf("A quantidade de leituras nao condiz com os requisitos minimos ou maximos\n");
				//define a variavel leitMinMax(Leitura Min e Max) como 0, voltando para o inicio
				leitMinMax = 0;
			}
			else {
				//define a variavel leitMinMax(Leitura Min e Max) como 1, continuando o código
				leitMinMax = 1;
			}
		}
		//chama a função de gerar numeros aleatorios baseadas no limite definido lá em cima
		for (int i = 0; i < quantLeituras; i++) {
			valores[i] = sortearDouble(limiteMaxRand);
		}
		//define a função de continuar operação como s, para não fechar o menu
		continuarOperacao = 's';
		//define a opção como -1 para não acabar selecionando uma opção sem querer, poderia ser qualquer valor "inexistente"
		//as vezes, se for um valor existente no menu, ele pode selecionar instantaneamente ou não, não sei por que
		int opcao =-1;

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
