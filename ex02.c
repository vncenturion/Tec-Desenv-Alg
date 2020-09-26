#include <stdio.h>

int main(void) {
  
  int numero=0;
  
  printf("Digite um numero inteiro qualquer: ");
  scanf("%d", &numero);
  
  if (numero==0)
  {
    printf("\nNumero 0 nao e valido!\n");
  }
  else
  {

    if (numero%2==0)
    {
      printf("o numero %d e par!\n",numero);
    }  
    else 
    {
      printf("o numero %d e impar!\n",numero);
    }
  }

  printf("\n--- fim do programa ---");
  return 0;
}