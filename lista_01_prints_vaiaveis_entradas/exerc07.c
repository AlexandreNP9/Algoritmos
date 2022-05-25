//Alexandre Nassar de Peder

#include <stdio.h>

int main() {
  int a, b, c;
  float media_simples, media_ponderada;

  printf("a = ");
  scanf("%i", &a);
  
  printf("b = ");
  scanf("%i", &b);

  printf("c = ");
  scanf("%i", &c);

  media_simples = (a+b+c)/3;
  media_ponderada = 0.1*a + 0.5*b + 0.4*c;

  printf("Media simples = %f\n", media_simples);
  printf("Media ponderada = %f\n", media_ponderada);

  return 0;
}