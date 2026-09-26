//exercicio 1
#include <stdio.h>

void gerarIdentidade(int matriz[10][10]){
    for (int i =0; i<10; i++){
        for(int j=0; j<10; j++){
            if (i == j){
                matriz[i][j] = 1;
            }
            else{
                matriz[i][j] =0;
            }
        }
    }
    printf("Aqui está a matriz:\n");
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
}
    
int main()
{
    int matriz[10][10];
    gerarIdentidade(matriz);
    return 0;
}