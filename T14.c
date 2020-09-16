#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char letra1, letra2, letra3;
    printf("Digite uma letra: ");
    scanf("%c", &letra1);
    printf("Digite uma outra: ");
    scanf("%c", &letra2);
    printf("Digite mais um: ");
    scanf("%c", &letra3);
    printf("Ficaram em horizontal: %c\n, %c\n, %c\n", letra1, letra2, letra3);

    return 0;
}