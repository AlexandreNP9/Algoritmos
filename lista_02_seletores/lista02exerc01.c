//Alexandre Nassar de Peder

#include <stdio.h>

int main() {
  int x;
  int modulo = 0;

  printf("Informe o número para saber o seu módulo. \n");
  printf("x = ");
  scanf("%i", &x);

  modulo = x;
  if (x < 0){
    modulo = x*(-1);
  }

  printf("|x| = %i\n", modulo);

  return 0;
}