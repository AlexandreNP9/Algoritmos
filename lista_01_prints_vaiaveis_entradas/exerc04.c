//Alexandre Nassar de Peder

#include <stdio.h>

int main() {
  int a;
  int b;
  scanf(" %i", &a);
  scanf(" %i", &b);

  int soma = a+b;
  int subtracao = a-b;
  
  printf("a + b = %i\n", soma);
  printf("a - b = %i\n", subtracao);

  return 0;
}