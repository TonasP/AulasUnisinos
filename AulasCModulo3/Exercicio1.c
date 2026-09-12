/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int quant, quantPar, quantImpar;
	quantImpar =0;
	quantPar =0;
	quant =0;
	int array[quant +1];
	printf("Quantos valores você quer inserir ?");
	scanf ("%d", &quant);

	for(int i = 0; i<quant; i++) {
		printf("Insira o valor",i);
		scanf("%d", &array[i]);
		if(array[i] %2==0) {
			quantPar++;
		}
		else {
			quantImpar++;
		}
	}
	printf("Quantidade de numeros par:%d\n", quantPar);
	printf("Quantidade de numeros impar:%d\n", quantImpar);


	return 0;
}
