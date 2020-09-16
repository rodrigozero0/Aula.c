#include <stdio.h>
#include <stdlib.h>

int main(){
    int dia, mes, ano;
    printf("DIGITE UM DIA: ");
    scanf("%i", &dia);
    printf("DIGITE UM MES: ");
    scanf("%i", &mes);
    printf("DIGITE UM ANO: ");
    scanf("%i", &ano);
    printf("A data que você digitou é: %i/%i/%i",dia,mes,ano);
    return 0;
}