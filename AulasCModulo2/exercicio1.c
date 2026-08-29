#include <stdio.h>

int main()
{
    double saldo;
    printf("Informe seu saldo: R$\n");
    scanf("%lf", &saldo);
    printf("Saldo: R$%.2f",saldo);
    

    return 0;
}
