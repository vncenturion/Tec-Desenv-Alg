#include <stdio.h>

int main() {

  int opcao = 1;
  //atribuicao de 1 para entrada no laco
  do
  {
    printf("SELECIONE UMA DAS OPÇOES\n1 - opcao 1\n2 - opcao 2\n3 - opcao 3\n4 - opcao 4\n5 - opcao 5\n6 - opcao 6\n7 - opcao 7\n8 - opcao 8\n9 - opcao 9\n0 - SAIR\n: ");
    scanf("%d", &opcao);
    //exibicao do menu
    
    switch (opcao) 
    {
      case 1:
        printf("Opção 01 selecionada\n\n");
        break;
      case 2:
        printf("Opção 02 selecionada\n\n");
        break;
      case 3:
        printf("Opção 03 selecionada\n\n");
        break;
      case 4:
        printf("Opção 04 selecionada\n\n");
        break;
      case 5:
        printf("Opção 05 selecionada\n\n");
        break;
      case 6:
        printf("Opção 06 selecionada\n\n");
        break;
      case 7:
        printf("Opção 07 selecionada\n\n");
        break;
      case 8:
        printf("Opção 08 selecionada\n\n");
        break;
      case 9:
        printf("Opção 09 selecionada\n\n");
        break;
      case 0:
        printf("Opção SAIR selecionada\n\n");
        break;
      default:
        printf("Opcao invalida!\n\n");
        break;
    }

  } while (opcao != 0);
  
  printf("fim do programa");

  return 0;
}