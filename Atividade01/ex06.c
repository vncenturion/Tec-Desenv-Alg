#include <stdio.h>

int main(void) 
{

    int tInicial, razao, iRazao, tNum, nTermos, i;  
    tInicial = 1;
    //iRazao: incremento de razao por funcao exponencial
    iRazao = 1;
    tNum = 0;
    //solicita razao da PG
    printf("Digite a razao da progressao geometrica: ");
    scanf("%d", &razao);
    //solicita termos da PG
    printf("Digite o numero de termos da progressao: ");
    scanf("%d", &nTermos);

    for (i=0; i < nTermos; i++)
    {
        tNum = tInicial * iRazao;
        iRazao = iRazao * razao;
        printf ("%d, ", tNum);
    }
  
    printf ("fim da progressao");
    return 0;

}