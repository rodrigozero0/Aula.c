#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
  int matriz[3][3], x, z;
  
  printf ("Digite valor para os elementos da matriz");
  
  for ( x=0; x<3; x++ )
    for ( z=0; z<3; z++ )
    {
      printf ("\n Matriz[%d][%d] = ", x, z);
      scanf ("%d", &matriz[ x ][ z ]);
    }
  
  printf("\n Saida de Dados \n");
  
  for ( x=0; x<3; x++ )
    for ( z=0; z<3; z++ )
    {
      printf ("\n Matriz[%d][%d] = %d", x, z,matriz[ x ][ z ]);
    }
    return 0;
}
