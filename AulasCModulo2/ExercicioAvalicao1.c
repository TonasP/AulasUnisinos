#include <stdio.h>

int main() {
    char continuar;

    do {
        int n;
        printf("Digite a quantidade de índices de audiência serão digitados: ");
        scanf("%d", &n);

        
        double valor_atual, ultimo_valor = 0.0;
        double soma = 0.0;
        int sempre_crescente = 1; 
        for (int i = 0; i < n; i++) {
            scanf("%lf", &valor_atual);
            soma += valor_atual;

           
            if (i > 0 && valor_atual <= ultimo_valor) {
                sempre_crescente = 0;
            }
            
            ultimo_valor = valor_atual;
        }


        if (sempre_crescente) {
            printf("AUDIÊNCIA SEMPRE CRESCENTE.\n");
        } else {
            printf("AUDIÊNCIA NEM SEMPRE CRESCENTE.\n");
        }

       
        double media = soma / n;
        printf("Média de audiência: %.1f\n", media);

        
        printf("Deseja continuar? ");
        scanf(" %c", &continuar); 
    } while (continuar == 'S' || continuar == 's');

    return 0;
}
