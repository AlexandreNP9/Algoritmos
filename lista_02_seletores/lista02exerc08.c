//Alexandre Nassar de Peder

#include <stdio.h>

int main() {
  int num;
  
  printf("Digite um numero de 5 digitos: \n");
  scanf("%i", &num);
  
  if ((num/10000 < 1) || (num/10000 > 9)){ 
    printf("O número digitado não tem 5 dígitos");
  } else {
  
    //aqui eu quero imprimir os numeros em ordem decrescente
    int a = 4; //o número 10 já tem duas unidades
    int imprime = 0;
    
    while (a>0){
      int quociente = 10;

      for (int b = a; b>1; b--){
        quociente = quociente*10;
      }

      imprime = num / quociente; //gera o inteiro
      num = num - (imprime*quociente); //imprime*quociente vai gerar o numero em sua ordem em relacao ao quociente. Por exemplo, 12345 vai ficar 10000, 987 vai ficar 900. Depois, subtrai esse resultado do numero alocado na memoria

      printf("%i\n",imprime); //imprime o coeficiente da unidade relativa ao quociente que está sendo trabalhado

      a--;
      
    }

    int para_acabar = num%10;

    printf("%i\n", para_acabar);
  
  }
  return 0;
}