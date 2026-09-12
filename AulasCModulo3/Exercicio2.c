/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int ehPrimo(int numero) {
	int primo = 1;
	if(numero<2) {
		primo =0;
	}
	else {
		for (int x = 2; x <numero; x++) {
			if(numero % x == 0) {
				primo = 0;
			}
		}
	}
	return primo;
}
void verificaFarmaAura(int Linha, int Coluna, int MatrizFA[Linha][Coluna]){
	int qtdPrimo = 0;
	for(int i =0; i< Linha; i++) {
		for(int j = 0; j< Coluna; j++) {
			int vlrPrimo = ehPrimo(MatrizFA[i][j]);
			if (vlrPrimo ==1) {
				qtdPrimo++;
			}
		}
	}
	double farma_auraPercentual =
	    (qtdPrimo * 100.0)/(Linha * Coluna);
	if(farma_auraPercentual >=70.0) {
		printf("FARMOU AURA 67");
	}
	else {
		printf("PERDEU AURA BETINHA");
	}
}
int main()
{
	int valor = 0;
	int numPrimos = 0;

	printf("Digite o tamanho da matriz quadrada");
	scanf("%d", &valor);
	int matriz[valor][valor];

	for(int i = 0; i<valor; i++) {

		for (int j= 0; j<valor; j++) {

			printf("Insira o valor para a posicao [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
			verificaFarmaAura(valor, valor, matriz);
		}
	}

	return 0;
}
