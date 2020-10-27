/*
Considere a estrutura. Faça um programa com os requisitos:
a) Cria uma conta
b) Consulta o saldo do cliente (entra com o numero da conta conferindo apenas a senha)
c) Deposita um valor (entra com o numero da conta e confere o nome do cliente)
d) Saca um valor (entra com o numero da conta e confere senha e chave, o cliente tem apenas autorização de sacar o seu dinheiro, conta sem limite)
e) Encerre a conta ( entra com o numero da conta e confere senha e chave, faça uma pergunta para que o cliente confira a operação e apague seus dados)
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct 
{
    char * nome[150];
    int numConta, senha, chave;
    float saldo;
    bool ativa;
} conta;

void menuInicial() 
{
    printf("Seleção de Menu: \n");
    printf("1 - CRIAR CONTA\n");
    printf("2 - CONSULTAR SALDO\n");
    printf("3 - DEPOSITAR EM CONTA\n");
    printf("4 - SACAR VALORES\n");
    printf("5 - ENCERRAR CONTA\n");
    printf("0 - Sair do programa\n");
    printf("Digite uma opção: ");
}

int main () 
{
    
    int seletorMenu;
    bool menu = true;
    
    conta novaConta;
    char novoNome[150];
    int novaNum, novaSenha, novaChave;
    float valorInicial;

    
    int num, senha, chave;
    char escolhaBin; 
    
    while(menu) {
        menuInicial();
        scanf("%d", &seletorMenu);
        
        switch (seletorMenu) {
        // sair
        case 0:
            menu = false;
            break;

        case 1:
            getchar();
            printf("OPCAO: CRIAR CONTA\n");
            
            printf("Digite seu nome: ");
            fgets(novoNome, 150, stdin);
            
            printf("Digite novo numero de conta: ");
            scanf("%d", &novaNum);
                        
            printf("Digite o valor inicial da conta: ");
            scanf("%f", &valorInicial);
            
            printf("Digite a senha: ");
            scanf("%d", &novaSenha);
            
            printf("Digite uma chave de segurança: ");
            scanf("%d", &novaChave);

            strcpy(novaConta.nome, novoNome);
            novaConta.numConta = novaNum;
            novaConta.saldo = valorInicial;
            novaConta.senha = novaSenha;
            novaConta.chave = novaChave;
            novaConta.ativa = true;
            break;

        case 2:
            printf("OPCAO: CONSULTAR SALDO\n");
            printf("Digite o num da conta: ");
            scanf("%d", &num);
            if (num == novaConta.numConta && novaConta.ativa) {
                printf("Seu saldo: R$%0.2f\n", novaConta.saldo);
            } else {
                printf("Numero de conta inexistente");
            }
            break;
        
        // deposito
        case 3:
            printf("OPCAO: DEPOSITAR EM CONTA\n");
            printf("Digite o num da conta: ");
            scanf("%d", &num);
            if (num == novaConta.numConta && novaConta.ativa == true) {
                printf("Nome da conta selecionada: %s\n", novaConta.nome);
                printf("Essa conta que deseja deposita (S/N): ");
                getchar();
                scanf("%c", &escolhaBin);
                if (escolhaBin == 'S') {
                    printf("Digite o valor que deseja depositar na conta escolhida: ");
                    scanf("%d", &num);
                    novaConta.saldo += num;
                    printf("Novo saldo: R$%0.2f", novaConta.saldo);
                } else {
                    printf("Operacao cancelada");
                    break;
                }
            } else {
                printf("Nome da conta inexistente");
                break;
            }
            break;


        // Sacar valor da Conta;
        case 4:
            printf("OPCAO: SACAR VALORES\n");
            printf("Digite o num da conta: ");
            scanf("%d", &num);
            printf("Digite a senha da conta: ");
            scanf("%d", &senha);
            if (num == novaConta.numConta && senha == novaConta.senha) {
                printf("Digite o valor desejado: ");
                scanf("%0.2f", &num);
                if (novaConta.saldo - num <= 0) break;
                printf("Digite a chave de seguranca: ");
                scanf("%d", &chave);
                if (chave != novaConta.chave) break;
                novaConta.saldo -= num;
                printf("Operacao completa");
            }
            break;

        // Encerrar conta
        case 5:
            printf("OPCAO: ENCERRAR CONTA\n");
            printf("Digite o num da conta para ser encerrado: ");
            getchar();
            scanf("%d", &num);
            if (num == novaConta.numConta && novaConta.ativa == true) {
                printf("Nome da conta selecionada: %s\n", novaConta.nome);
                printf("Para cancelar digite a senha da conta: ");
                getchar();
                scanf("%d", &senha);
                printf("Para cancelar digite a chave de seguranca: ");
                getchar();
                scanf("%d", &chave);
                if (senha == novaConta.senha && chave == novaConta.chave) {
                    novaConta.ativa = false;
                    printf("Conta desativada\n");
                } else {
                    printf("Senha ou Chave errada\n");
                    break;
                }
            }
            break;
            
        default:
            printf("Escolha invalida");
            break;
        }
        printf("\n");
        getchar();
    }
    return 0;
}