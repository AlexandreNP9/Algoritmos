//Alexandre Nassar de Peder

#include <stdio.h>

int main() {
  int num;
  printf("Par, ímpar ou 0?\n");

  printf("Número = ");
  scanf("%i", &num);

  if (num==0){
    printf("%i", num);
    printf(" é zero.");
  } else if (num%2==0) {
    printf("%i", num);
    printf(" é par");
  } else {
    printf("%i", num);
    printf(" é ímpar");
  }

  return 0;
}