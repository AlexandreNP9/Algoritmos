// Alexandre Nassar de Peder

#include <stdio.h>

int main() {
  int a;
  int b;
  
  printf("a = ");
  scanf("%i", &a);

  printf("b = ");
  scanf("%i", &b);

  if (a!=b && (a>=0 && b>=0)){
    if (a>b){
      printf("\n%i", a);
      printf(" é o maior.");
    } else {
      printf("\n%i", b);
      printf(" é o maior.");
    }
  } else {
    if (a==b){
      printf("\nEsses números são iguais! Experimente com números diferentes.");
    } else {
      printf("\nDigite apenas números positivos, por favor.");
    }
  }  
  
  return 0;
}