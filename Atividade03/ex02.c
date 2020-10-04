#include <stdio.h>

int main(void)
{
	int i, contador;
  char str1[20] = " ";
  char str2[20] = " ";

  printf("stg1: ");
  scanf("%s",str1);
  printf("stg2: ");
  scanf("%s",str2);

  //funcao STRCMP retorna inteiro = 0 se sao iguais; -1 se caractere diferente é menor que o comparado, e +1, se maior;
  for (i=0, contador=0; contador == 0 & str1[i]!= '\0'; i++)	{
	  if (str1[i] != str2[i] & str1[i] < str2[i])
    {
      contador = contador-1;
    } else if (str1[i] != str2[i] & str1[i] > str2[i]) 
    {
      contador = contador+1;
    } else 
    {
      contador = contador+0;
    }
    //para conferir contador
    //printf("%d\n",contador);
	}

  if (contador!=0)
  {
    printf("\nSTRCMP: %d. Strings sao diferentes.", contador);
  } else 
  {
    printf("\nSTRCMP: %d. As strings sao iguais.", contador);
  }

  printf("\n- - - fim do programa - - -");
	return 0;
}