/*
Uma empresa comercial possui um programa para controle das receitas e despesas em seus 10 projetos. Os projetos são numerados de 0 até 9. Faça um programa C que controle a entrada e saída de recursos dos projetosEquipe1. O programa deverá ler um conjunto de informações contendo: Número do projeto, valor, tipo despesa ("R" - Receita e "D" - Despesa). O programa termina quando o valor do código do projeto for igual a -1. Sabe-se que Receita deve ser somada ao saldo do projeto e despesa subtraída do saldo do projeto. Ao final do programa, imprimir o saldo final de cada projeto.

Dica: Usar uma estrutura do tipo vetor para controlar os saldos dos projetos. Usar o conceito de struct para agrupar as informações lidas.
*/


#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct tipoDespesa
{
	float R, D;
};

struct Projeto 
{
    int numProjeto;
    float valor;
	struct tipoDespesa balanco;
};


int main()
{
    struct Projeto projetosEquipe1[10];
	int i=0,seletor=0;
	//setar projetos
    for (i = 0; i<10; i++)
    {
        projetosEquipe1[i].numProjeto = i;
		projetosEquipe1[i].valor = 0.0;
        projetosEquipe1[i].balanco.D = 0.0;
        projetosEquipe1[i].balanco.R = 0.0;
    };
    
	printf("Digite o numero do projeto (0~9) ou -1 para sair: ");
	scanf(" %d", &seletor);

	while (seletor!=-1)
	{
		switch (seletor)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6: 
			case 7: 
			case 8:
			case 9:
				printf("Digite o valor do projeto %d: ", seletor);
            	scanf("%f", &projetosEquipe1[seletor].valor);
            	printf("Digite o valor das Receitas do projeto %d: ", seletor);
            	scanf("%f", &projetosEquipe1[seletor].balanco.R);
            	printf("Digite o valor das Despesas do projeto %d: ", seletor);
            	scanf("%f", &projetosEquipe1[seletor].balanco.D);
				printf("\nDigite o numero do projeto (0~9) ou -1 para sair: ");
				scanf(" %d", &seletor);
				break;
			default:
				printf("Opcao invalida\n");
				printf("\nDigite o numero do projeto (0~9) ou -1 para sair: ");
				scanf(" %d", &seletor);
				break;
				
		}
	}

	//IMPRIMIR RELATORIOS
	printf("\nRELATORIO DE PROJETOS\n\n");
	for (i = 0; i<10; i++)
    {
        printf("Projeto numero: %d\nSaldo: %.2f\n\n", projetosEquipe1[i].numProjeto, projetosEquipe1[i].valor - projetosEquipe1[i].balanco.D + projetosEquipe1[i].balanco.R);
    };
	printf("\n- fim do relatorio -\n");
	
    return 0;
}