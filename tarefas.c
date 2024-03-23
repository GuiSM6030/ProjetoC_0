#include "tarefas.h"
#include <stdio.h>
#include <string.h>
  
int criar(Tarefa tarefas[], int *position){
  printf("Função de criar tarefa\n");
    return 0;
}

int deletar(Tarefa tarefas[], int *position){
  if(*position == 0)
   return 1;

  int position_d;
  printf("entre com a positionição da tarefa: ");
  scanf("%d", &position_d);
  position_d--;

  if(position_d >= *position)
   return 2;

  for(int i=position_d;i<*position; i++){
    tarefas[i].prioridade = tarefas [i+1].prioridade;
    strcpy(tarefas[i].categoria, tarefas[i+1].categoria);
    strcpy(tarefas[i].descricao, tarefas[i+1].descricao);
  }

  *position = *position -1;

  return 0;
}

int listar(Tarefa tarefas[], int position){
  printf("Função de listar tarefa\n");
    return 0;
}
int salvar(Tarefa tarefas[], int total, int position){
  printf("Função de salvar tarefa\n");
    return 0;
}
int carregar(Tarefa tarefas[], int total, int position){
  printf("Função de carregar tarefa\n");
    return 0;
}