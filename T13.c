#include <stdio.h>
#include <stdlib.h>

int main() {
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    printf("Sua letra ficará assim: \"%c\"", letra);
    return 0;
}