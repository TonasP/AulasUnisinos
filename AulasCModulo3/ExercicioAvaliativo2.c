#include <stdio.h>
#include <string.h>
// QUESTAO 2:
// CRIE UM PROGRAMA QUE LE DUAS STRINGS DO TECLADO E IMPRIME NA TELA OS CARACTERES QUE EXISTEM EM AMBAS AS STRINGS
int main()
{
    char stringUm[20];
    char stringDois[20];
    char stringIguais[20];
    int k = 0;

    printf("Insira a primeira string\n");

    fgets(stringUm, sizeof(stringUm), stdin);

    stringUm[strcspn(stringUm, "\n")] = '\0';

    printf("Insira a segunda string\n");
    fgets(stringDois, sizeof(stringDois), stdin);
    stringDois[strcspn(stringDois, "\n")] = '\0';

    size_t tamanhoUm = strlen(stringUm);
    size_t tamanhoDois = strlen(stringDois);

    for (int i = 0; i < tamanhoUm; i++)
    {
        if (stringUm[i] == ' ')
            continue;

        for (int j = 0; j < tamanhoDois; j++)
        {
            if (stringUm[i] == stringDois[j])
            {
                int jaExiste = 0;
                for (int m = 0; m < k; m++)
                {
                    if (stringIguais[m] == stringUm[i])
                    {
                        jaExiste = 1;
                        break;
                    }
                }

                if (!jaExiste)
                {
                    stringIguais[k] = stringUm[i];
                    k++;
                }
                break;
            }
        }
    }

    stringIguais[k] = '\0';

    printf("Aqui estao as letras iguais em ambas as strings: %s\n", stringIguais);

    return 0;
}
