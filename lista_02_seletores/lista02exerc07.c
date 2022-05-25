//Alexandre Nassar de Peder

#include <stdio.h>

int main() {
  int a, b, c;

  printf("a = ");
  scanf("%i", &a);
  printf("b = ");
  scanf("%i", &b);
  printf("c = ");
  scanf("%i", &c);

  if (a>b && a>c){
    if (b>c){
      printf("%i\n", a);
      printf("%i\n", b);
      printf("%i\n", c);
    } else {
      printf("%i\n", a);
      printf("%i\n", c);
      printf("%i\n", b);
    }

  } else if( b>a && b>c){
    if (a>c){
      printf("%i\n", b);
      printf("%i\n", a);
      printf("%i\n", c);
    } else {
      printf("%i\n", b);
      printf("%i\n", c);
      printf("%i\n", a);
    }

  } else {
    if (a>b){
      printf("%i\n", c);
      printf("%i\n", a);
      printf("%i\n", b);
    } else {
      printf("%i\n", c);
      printf("%i\n", b);
      printf("%i\n", a);
    }
  }

  return 0;
}