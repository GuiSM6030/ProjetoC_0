#include <stdio.h>

int main(){
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

    if(opcao == 1){
      int erro = criar(tarefas, &position);
    } else if(opcao == 2){
      int erro = deletar(tarefas, &position);
    } else if(opcao == 3){
      int erro = listar(tarefas, position);
    } else if(opcao == 0){
      printf("Sair \n");
      
    } else {
      printf("Opção inválida\n");
    }

  }
    while (opcao != 0);  
    

}