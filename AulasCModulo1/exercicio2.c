#include <math.h>
#include <stdio.h>
int main(){
    int pessoas, mediaMin, banhosDia, calculoDiarioAgua, calculoMensalAgua;
    double calculoMensalCusto;
    
    printf("Quantas pessoas há na casa ?:\n");
    scanf("%d", &pessoas);
    printf("Em minutos, quanto tempo vocês demoras no banho ?:\n");
    scanf("%d", &mediaMin);
    printf("Quantos banhos vocês tomam por dia ?:\n");
    scanf("%d", &banhosDia);
    
    calculoDiarioAgua = pessoas * mediaMin * banhosDia;
    calculoMensalAgua = pessoas * mediaMin * banhosDia * 30;
    calculoMensalCusto = (calculoMensalAgua / 1000) * 6.50;
    
    printf("--- RELATÓRIO MENSAL (30 DIAS) ---\n");
    printf("Consumo total de agua mensal:%dL\n", calculoMensalAgua);
    printf("Custo mensal dos banhos:R$%.2f\n", calculoMensalCusto);
    printf("Galões de 20L:%d Galões\n", calculoMensalAgua/20);
    printf("----------------------------------\n");
    
    return 0;
}