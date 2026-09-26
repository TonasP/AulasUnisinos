#include <stdio.h>

int main() {
    
    char gabarito[9] = "rgbrygbg"; 
    char tentativa[9];
    
    int acertos = 0;
    int erros = 0;

    printf("--- JOGO DA MEMORIA ---\n");
    printf("Cores: 'r' (vermelho), 'g' (verde), 'b' (azul), 'y' (amarelo)\n");
    printf("Digite sua tentativa de 8 cores (ex: rgbyrgby): ");
    
    
    scanf("%8s", tentativa);

    printf("\n--- RESULTADO ---\n");
    printf("Posicoes com erro: ");
    
    
    for (int i = 0; i < 8; i++) {
        if (tentativa[i] == gabarito[i]) {
            acertos++;
        } else {
            
            printf("%d ", i + 1);
            erros++;
        }
    }

    
    if (erros == 0) {
        printf("Nenhuma! Voce acertou a sequencia perfeita.");
    }
    
    printf("\nTotal de acertos exatos: %d de 8\n", acertos);

    return 0;
}