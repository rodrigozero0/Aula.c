#include <stdio.h>
#include <string.h>

int main() {
  char num_1[100], num_2[100];
  printf("Digite um número real; Enter an float\n:");
  scanf("%s", num_1);

  printf("Digite outro número real; Enter another float\n:");
  scanf("%s", num_2);

  int lnum_1, lnum_2;

  printf("os números invertidos são: ");

  for( lnum_1 = strlen(num_1); lnum_1 >= 0; lnum_1 = lnum_1 - 1) {
    printf("%c", num_1[lnum_1]);
  }

  printf(", ");

  for( lnum_2 = strlen(num_2); lnum_2 >= 0; lnum_2 = lnum_2 - 1) {
    printf("%c", num_2[lnum_2]);
  }

  printf(" .");
  return 0;
}