#include <stdio.h>
// QUESTAO 1:
// CRIE UM PROGRAMA QUE PREENCHE UM ARRAY DE DOUBLE COM 10 VALORES VINDOS DO TECLADO E IMPRIME A MEDIA DELES
int main()
{

    float array[10];
    float armNum = 0;
    float media;
    for (int i = 0; i < 10; i++)
    {
        printf("Insira o valor\n", i, "\ndo array:\n");
        scanf("%f", &array[i]);
        armNum += array[i];
    }
    media = armNum / 10.0;
    printf("Essa é a média dos nuemros:%.2f\n", media);

    return 0;
};
