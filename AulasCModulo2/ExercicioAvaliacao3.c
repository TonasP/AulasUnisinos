#include <stdio.h>

int main() {
    int N;

   
    printf("Digite o número de linhas (N): ");
    scanf("%d", &N);

 
    for (int i = 1; i <= N; i++) {
        
        
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        
        
        printf("\n");
    }

    return 0;
}
