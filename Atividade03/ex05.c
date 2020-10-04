#include <stdio.h>

int main(void) {
  
  int i = 0;
  int contador = 0;
  int saida = 0;
  char str1[20] = "annA";

  //libere para solicitar palavra do usuário!
  /*printf("digite uma palavra: ");
  gets(str1);*/

  //percorre string até o fim para identificar posicao do ultimo caractere:
  for (contador=0; str1[contador]!=0; contador++) 
  {
    //printf("contador dentro: %d\n", contador);
    //printf("str[%d]: %c\n", contador, str1[contador]);
  }

  //como o contador incrementa com o finalizador \0, é preciso decrementar 1 para identificar a posicao do ultimo caractere valido.
  //printf("contador fora: %d\n", contador);
  contador = contador-1;

  while (str1[i] != '\0' & saida == 0)
  {
    if (str1[i]==str1[contador] || str1[i] == (str1[contador]+32) || str1[i] == (str1[contador]-32))
    //observe que a comparacao de caractere segue os valores correspondentes a tabela ASCII, estando as maiusculas e minusculas separadas por 32 unidades. Assim, para fazer a comparacao considerando que caracteres maiusculos e minusculos sao identicos, acrescentou-se os intervalo em modulo.
    {
      i++;
      contador--;
    }
    else
    {
      printf("\n%s nao eh palindromo!\n", str1);
      saida = 1;
    }
  }

  if (saida == 0) 
  {
    printf("\n%s eh palindromo!\n", str1);
  }  
  printf("\n- - - FIM DO PROGRAMA - - -\n");

  return 0;
}