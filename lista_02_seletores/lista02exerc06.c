//Alexandre Nassar de Peder

#include <stdio.h>

int main() {
  int a, b, c, d;

  printf("a = ");
  scanf("%i", &a);
  printf("b = ");
  scanf("%i", &b);
  printf("c = ");
  scanf("%i", &c);
  printf("d = ");
  scanf("%i", &d);

  if (a>b && a>c && a>d){
    printf("%i", a);
    printf(" é o maior número");
  } else if (b>a && b>c && b>d){
    printf("%i", b);
    printf(" é o maior número");
  } else if (c>a && c>b && c>d){
    printf("%i", c);
    printf(" é o maior número");
  } else {
    printf("%i", d);
    printf(" é o maior número");
  }
  
  return 0;
}