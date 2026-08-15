#include <math.h>
#include <stdio.h>
int main() {
    int a, b, c, d, e, soma;
	
	printf("Insira o primeiro numero:\n");
	scanf("%d", &a);
	printf("Insira o segundo numero:\n");
	scanf("%d", &b);
	printf("Insira o terceiro numero:\n");
	scanf("%d", &c);
	printf("Insira o quarto numero:\n");
	scanf("%d", &d);
	printf("Insira o quinto numero:\n");
	scanf("%d", &e);
	
	soma = a+b+c+d+e;
	
	printf("Soma de todos os numeros: %d\n", soma);
	
	return 0;
}