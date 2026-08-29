#include <stdio.h>

int main() {
    int num, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }

    if (soma == num && num != 0) {
        printf("%d e um numero perfeito!\n", num);
    } else {
        printf("%d nao e um numero perfeito.\n", num);
    }

    return 0;
}
