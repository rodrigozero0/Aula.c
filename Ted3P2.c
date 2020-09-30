#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    double h = 0.0, num, i;
    printf("Digite Um Número Para Harmônica: ");
    scanf("%lf", &num);
    for (i = 1; i < num + 1; i++){
        h = h + 1/i;
    }
    printf("%.16lf", h);

    return 0;
}
