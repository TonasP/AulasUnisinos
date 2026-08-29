#include <stdio.h>

int main() 
{
    double saldo = 3000;
    double valorSaque;
    
    printf("Informe o valor do saque: R$\n");
    scanf("%lf", &valorSaque);
    
    int valorPositivo = valorSaque > 0;
    int cabeNoSaldo = valorSaque <= saldo;
    int saqueValido = valorPositivo && cabeNoSaldo;
    
    printf("Valor positivo? %d\n", valorPositivo);
    printf("Cabe no saldo? %d\n", cabeNoSaldo);
    printf("Saque valido? %d\n", saqueValido);
   
    return 0;
}
