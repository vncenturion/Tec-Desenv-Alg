#include <stdio.h>

int main(void) 
{
  unsigned long int fatorial = 1;
  int num, i;
  // adota-se unsigned long int em razao do crescimento da funcao
  
  printf("Digite um numero inteiro qualquer: ");
  scanf("%d", &num);
  
  for (i=1; i<=num; i++)
  {
    fatorial=fatorial*i;
    //para conferir:
    printf("i: %d, fatorial: %lu\n",i,fatorial);
  }
  
  printf("fatorial de %d vale %lu", num, fatorial);
  /*
  adota-se a definicao de 0!=1 do ensino medio;
  ressalta-se no entando que a integral da funcao gama que define a funcao fatorial so é convergente para num>0.
  */

  return 0;
}