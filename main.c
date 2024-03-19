#include "tarefas.h"
#include "tarefas.c"
#include <stdio.h>


int main(){

  int position = 0;
  Tarefa tarefas[TOTAL];
  
  int opcao;

  do{
    printf("\n Menu Principal\n");
    printf("1. Cadastrar\n");
    printf("2. Deletar\n");
    printf("3. Listar\n");
    printf("0. Sair\n");

    printf("\n Escolha uma opção acima. \n");
  
    int i = scanf("%d", &opcao);
  
    printf("Opção escolhida %d\n", opcao);
    
  }
    while (opcao != 0);  
    

}