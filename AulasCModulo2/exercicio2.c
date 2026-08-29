#include <stdio.h>

int main()
{
    double saldo = 3000;
    double saque = 2000;
    
    int podeSacar = saldo >= saque;
    
    printf("%d\n", podeSacar);
    
    return 0;
}
