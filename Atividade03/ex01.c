#include <stdio.h>

int main(void)
{
	int i;
  char fonte[20] = " ";
  char copia[20] = " ";

  printf("Fonte: ");
  scanf("%s",fonte);

  for (i=0; fonte[i] != '\0'; i++)	{
	  copia[i] = fonte[i];
	}
  //adiciona finalizador \0 a str copia
  copia[i]='\0';

  printf("copia: %s\nfonte: %s\n", copia, fonte);
	  
	

	return 0;
}