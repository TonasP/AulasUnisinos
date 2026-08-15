#include <math.h>
#include <stdio.h>
int main() {
	//variaveis de input
	double distanciaKm, consumoKmL, preçoCombustivel, orcamentoReais;
	int capacidadeTanque;

	printf("Insira a distancia até o local destinado em Km:\n");
	scanf("%lf", &distanciaKm);
	printf("Insira consumo de combustível médio do seu carro:\n");
	scanf("%lf", &consumoKmL);
	printf("Insira a capacidade do tanque de combustível:\n");
	scanf("%d", &capacidadeTanque);
	printf("Insira o preço médio do combustível:\n");
	scanf("%lf", &preçoCombustivel);
	printf("Insira seu orçamento para o combustível:\n");
	scanf("%lf", &orcamentoReais);

	//variaveis de calculo
	double litrosNecessarios = distanciaKm / consumoKmL;
	double valorViagem = preçoCombustivel * litrosNecessarios;
	double autonomiaTotal = capacidadeTanque * consumoKmL;
	double minParadas = (distanciaKm/autonomiaTotal);
	double saldoOrcamento = orcamentoReais - valorViagem;

	printf("--- RELATÓRIO ---\n");
	printf("Combustível necessário: %.2fL\n", litrosNecessarios);
	printf("Custo total: R$%.2f\n", valorViagem);
	printf("Autonomia por tanque: %.2f Km/L\n", autonomiaTotal);
	printf("Paradas necessárias: %.1f paradas\n", minParadas);
	printf("-----------------------\n");
	printf("RELATÓRIO DE SALDO\n");
	printf("Saldo restante: R$%.2f\n", saldoOrcamento);
	printf("-----------------------\n");
	return 0;

}