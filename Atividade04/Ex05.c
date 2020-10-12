/*
URI 1871
Input
There will be several test cases . Each test case begins with two integers M and N ( 1 ≤ M ≤ N ≤ 999 999 999 ) .
The last test case is indicated when C = M = 0 , and this case should not be processed.

Output
For each test case , print the sum of the two values ​​without Zeros .
*/

#include <stdio.h>

int main(){
	int a,b,vetor[15],i;

	while(scanf("%d %d",&a,&b) && (a!=0 || b!=0))
	{
		int soma = a + b;

		//Separa cada dígito do número e coloca em posições do vetor;
		for(i = 0 ; i < 11 ; i++)
		{
			vetor[i] = soma %10;
			soma /= 10;
		}

		//Imprime o vetor caso o valor da posição i não seja 0;
		//i começa com 10 porque os algarismos foram colocados no vetor de trás
		//para frente;
		for(i = 10 ; i >= 0 ; i--)
        {
			if(vetor[i] != 0)
            {
                printf("%d",vetor[i]);
			}
		}

		printf("\n");
	}
}