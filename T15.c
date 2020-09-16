#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char letra;
    int num;
    float real;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    printf("Digite um numero inteiro: ");
    scanf("%i", &num);
    printf("Digite um numero real: ");
    scanf("%f", &real);
    printf("Isso ficará assim: \n%c\n%i\n%f\n", letra, num, real);
    return 0;
}