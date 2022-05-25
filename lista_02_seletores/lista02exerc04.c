//Alexandre Nassar de Peder

#include <stdio.h>

int main() {
  int ano;

  printf("Digite um ano: \n");
  scanf("%i", &ano);

  if (ano<0){
    printf("Esse ano está errado!");
  } else {
    if (ano%4==0 && ano%100!=0){
      printf("%i", ano);
      printf(" É bissexto.");
    } else {
      printf("%i", ano);
      printf(" NÃO é bissexto.");
    }
  }

  return 0;
}