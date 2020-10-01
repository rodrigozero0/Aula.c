#include <stdio.h>
#include <stdlib.h>
// Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. 
//Construa um programa que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico
int main(int argc, char const *argv[])
{
    float c1 = 1.50, z1 = 1.10;
    float c2 = 0.02, z2 = 0.03;
    int A;
    for (A = 1; c1 > z1; A++){
        c1 = c1 + c2;
        z1 = z1 + z2;
    }
    printf("O Zé ira utrapassar Chico em (%i) anos", A);

    return 0;
}
