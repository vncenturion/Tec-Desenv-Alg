#include <stdio.h>

int main(void)
{
	int i, contador;
  char str1[20] = "Maria Regina ";
  char str2[20] = "Da Silva";
  char str3[41] = " ";
  
  //printf("stg1: ");
  //scanf("%s",str1);
  //printf("stg2: ");
  //scanf("%s",str2);
  
  for (i=0, contador=0; str1[i] != '\0'; i++, contador++)
  {
	  str3[i]=str1[i];
	}
  
  for (i=0; str2[i] != '\0'; i++, contador++)
  {
	  str3[contador]=str2[i];
	}

  printf("\n%s", str3);
  
  printf("\n- - - fim do programa - - -");
	return 0;
}