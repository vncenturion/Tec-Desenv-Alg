#include <stdio.h>

int main(void) {
  
  int ano;
  printf("Insira um ano qualquer: ");
  scanf("%d",&ano);

  #define bissexto "o ano de %d e bissexto"
  #define naoBissexto "o ano de %d nao e bissexto"

  if (ano%4==0)
  {
    printf(bissexto, ano);
  }
  else
  {
    printf(naoBissexto, ano);
  }
  
  return 0;
}