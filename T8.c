#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num1, mun1 = 0, ln1;
    int num2, mun2 = 0, ln2;
    printf("Digite um numero inteiro: ");
    scanf("%i", &num1);
    printf("Digite um outro numero inteiro: ");
    scanf("%i", &num2);
    while (num1 != 0)
    {
        ln1 = num1%10;
        mun1 = mun1*10 + ln1;
        num1 = num1/10;
    }
    while (num2 != 0)
    {
        ln2 = num2%10;
        mun2 = mun2*10 + ln2;
        num2 = num2/10;
    }
    printf("Eles ficaram invertidos nessa maneira: %i, %i", mun1, mun2);
    return 0;
}