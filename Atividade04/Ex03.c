/* 
URI 1151
Input
The input file contains an integer number N (0 < N < 46).

Output
The numbers ​​should be printed on the same line, separated by a blank space. There is no space after the last number.
*/

#include <stdio.h>

int main ()
{

    int n, i, a = 0, b = 1, c = 0;
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        printf("%d", a);
        return 0;
    }

    printf("%d", a);
    for (i = 2; i <= n; i++)
    {
        printf(" ");
        a = b;
        b = c;
        c = a + b;
        printf("%d", c);
    
        //printf("entrou no laco! a=%d, b=%d, c=%d\n", a, b, c);
    }

    printf("\n");
    //necessario para não receber erro de apresentacao. embora o exercicio fale apenas que não há espaco apos o ultimo numero.

    return 0;

}