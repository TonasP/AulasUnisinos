#include <stdio.h>
#include <string.h>

int main()
{
	int matriz[4][10];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("Insira o valor para [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}

	printf("\nMatriz resultante:\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%d \t", matriz[i][j]);
		}
		printf("\n");
	}

	return 0;
}
