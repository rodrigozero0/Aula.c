#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float salary, taxRate, deduction;
    printf("Digite seu Salário, em reais: ");
    scanf("%f", &salary);
    /*Base de cálculo mensal em R$	Alíquota %	Parcela a deduzir do imposto em R$
    Até 1.903,98	                    –	                   –
    De 1.903,99 até 2.826,65           7,5	               142,80
    De 2.826,66 até 3.751,05	       15,0	               354,80
    De 3.751,06 até 4.664,68	       22,5	               636,13
    Acima de 4.664,68	               27,5	               869,36*/
    if (1903.99 > salary){
		taxRate = 0;
		deduction = 0;
        printf("Se seu salário for até 1.903,99: Alíquota %f deduzir %f\n", taxRate, deduction);
		
    } else if ((1903.99 <= salary) && (salary < 2826.65)){
		taxRate = 7.5;
		deduction = 142.80;
        printf("Se seu salário for De 1.903,99 até 2.826,65: Alíquota %f deduzir %f\n", taxRate, deduction);

    } else if ((2826.66 <= salary) && (salary < 3751.05)){
		taxRate = 15.0;
		deduction = 354.80;
        printf("Se seu salário for De 2.826,66 até 3.751,05: Alíquota %f deduzir %f\n", taxRate, deduction);

    } else if ((3751.06 <= salary) && (salary < 4664.68)){
		taxRate = 22.5;
		deduction = 636.13;
        printf("Se seu salário for 3.751,06 até 4.664,68: Alíquota %f deduzir %f\n", taxRate, deduction);

    } else { //Acima de 4.664,68
		taxRate = 27.5;
		deduction = 869.36;
        printf("Se seu salário for Acima de 4.664,68: Alíquota %f deduzir %f\n", taxRate, deduction);
    }
	//tax = salary * taxRate - deduction
	float tax = salary * (taxRate/100) - deduction;
	printf("Você tem que pagar esse valor: R$%.2f", tax);
    return 0;
}