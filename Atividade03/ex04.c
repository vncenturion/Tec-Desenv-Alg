#include <stdio.h>
//para conferir:
//#include <string.h>

int main(void)
{
	int i, contador;
  char str1[20] = " ";
    
  printf("str1: ");
  //scanf("%s",str1);
  gets(str1);
  
  for (i=0; str1[i]!='\0'; i++)
  {
	  contador=i+1;
	}
  
  printf("\n%d", contador);
  
  printf("\n- - - fim do programa - - -");
  /*
  char szInput[256];
  printf ("\nEnter a sentence: ");
  gets(szInput);
  printf ("The sentence entered is %u characters long.\n",(unsigned)strlen(szInput));
  */
	return 0;
}
