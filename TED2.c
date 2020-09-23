#include <stdio.h>
#include <stdlib.h>
void limparBuffer(void){
  char c;
  while(((c=getchar()) != '\n') && (c != EOF));
}
int main(int argc, char const *argv[])
{
    void limparBuffer(void);
    float num1;
    float num2;
    char lta;
    printf("Digite um numero inteiro: ");
    scanf("%f", &num1);
    printf("Digite um outro valor: ");
    scanf("%f", &num2);
    printf("Digite uma operação: ");
    limparBuffer();
    scanf("%c", &lta);
    if (lta == '+')
    {
        printf("O valor de %f e %f é igual: %f", num1 , num2, num1+num2);
    }
    if (lta == '-')
    {
        printf("O valor de %f e %f é igual: %f", num1 , num2, num1-num2);
    }
    if (lta == '*')
    {
        printf("O valor de %f e %f é igual: %f", num1 , num2, num1*num2);
    }
    if ((lta == '/') && (num2 != 0))
    {
        printf("O valor de %f e %f é igual: %f", num1 , num2, num1/num2);
    }
    return 0;
}
