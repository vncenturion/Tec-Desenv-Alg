/*
Escreva um trecho de código em C para fazer a criação dos novos tipos de dados conforme solicitado abaixo:
Horário: composto de hora, minutos e segundos.
Data: composto de dia, mês e ano.
Compromisso: composto de uma data, horário e texto que descreve o compromisso.
*/

#include <stdio.h>
#include <string.h>

struct horario {
    int hora, minuto, segundo;
};

struct data {
    int dia, mes, ano;
};

struct compromisso {
    struct data data_compromisso;
    struct horario horario_compromisso;
    char descricao[500];
};

int main () 
{ 
	struct compromisso reuniaoCliente;
    reuniaoCliente.data_compromisso.dia = 20;
    reuniaoCliente.data_compromisso.mes = 11;
    reuniaoCliente.data_compromisso.ano = 2020;
    reuniaoCliente.horario_compromisso.hora = 10;
    reuniaoCliente.horario_compromisso.minuto = 30;
    reuniaoCliente.horario_compromisso.segundo = 00;
    strcpy(reuniaoCliente.descricao, "Apresentacao de projeto e memorial descritivo para analise preliminar");

    printf("Data: %d/%d/%d \n", reuniaoCliente.data_compromisso.dia,reuniaoCliente.data_compromisso.mes,reuniaoCliente.data_compromisso.ano);
	printf("Hora: %dh%dm%ds \n", reuniaoCliente.horario_compromisso.hora,reuniaoCliente.horario_compromisso.minuto,reuniaoCliente.horario_compromisso.segundo);
	printf("Descrição: %s\n", reuniaoCliente.descricao);
	
    return 0;
}