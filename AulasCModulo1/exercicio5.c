#include <math.h>
#include <stdio.h>
int main() {
    //variaveis de input
	double a, b, c, d;
	
	printf("Insira o primeiro numero:\n");
	scanf("%lf", &a);
	printf("Insira o segundo numero:\n");
	scanf("%lf", &b);
	printf("Insira o terceiro numero:\n");
	scanf("%lf", &c);
	printf("Insira o quarto numero:\n");
	scanf("%lf", &d);
	
	//variaveis de calculo
	double primeiroCalculo = a*a;
	double segundoCalculo = b*b*b;
	double terceiroCalculo = sqrt(c);
	double quartoCalculo = pow(a, b);
	double quintoCalculo = (a+b+c+d) / 4;
	double sextoCalculo = sqrt(((a*a)+(b*b)+(c*c)+(d*d)));
	double setimoCalculo = ((a*a)+(b*b)) / (sqrt(c)+(d*d));
	
	printf("Primeiro numero:%.2f\n", a);
	printf("Segundo  numero:%.2f\n", b);
	printf("Terceiro numero:%.2f\n", c);
	printf("Quarto  numero:%.2f\n", d);
	
	printf("quadrado do primeiro número:%.2f\n", primeiroCalculo);
	printf("cubo do segundo número:%.2f\n", segundoCalculo);
	printf("raiz quadrada do terceiro número:%.2f\n", terceiroCalculo);
	printf("potência do primeiro número elevado ao segundo número:%.2f\n", quartoCalculo);
	printf("média aritmética dos quatro números: %.2f\n", quintoCalculo);
	printf("raiz quadrada da soma dos quadrados dos quatro números: %.2f\n", sextoCalculo);
	printf("Sétimo calculo:%.2f\n", setimoCalculo);
	
	return 0;
	
	
}