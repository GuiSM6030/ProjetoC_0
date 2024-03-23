#define TOTAL 100

typedef struct tarefa{
  int prioridade;
  char descricao[300];
  char categoria[100];

} Tarefa;

int criar(Tarefa tarefas[], int *position);
int deletar(Tarefa tarefas[], int *position);
int listar(Tarefa tarefas[], int position);
int salvar(Tarefa tarefas[], int total, int position);
int carregar(Tarefa tarefas[], int total, int position);