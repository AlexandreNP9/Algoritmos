//Alexandre Nassar de Peder

#include <stdio.h>

int main() {
  int a;
  int b;
  int multiplicacao;
  int divisao_inteira;
  int resto_da_divisao;

  printf("a = ");
  scanf("%i", &a);
  printf("b = ");
  scanf("%i", &b);

  multiplicacao = a*b;
  divisao_inteira = a/b;
  resto_da_divisao = a%b;

  printf("Multiplicação ==> (a * b) = %i\n", multiplicacao);

  printf("Divisão inteira ==> (a / b) = %i\n", divisao_inteira);

  printf("Resto da divisão ==> (a % b) = %i\n", resto_da_divisao);

  return 0;
}