#include <stdio.h>
#include <stdlib.h>

struct est_no{
    int valor;
    struct est_no *prox;
};
typedef struct est_no tipo_no;

//funcao que aloca um novo no
tipo_no *alocaNO(int valor){
    tipo_no *novo_no = (tipo_no*)malloc(sizeof(tipo_no));
   if (novo_no == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1); // Termina o programa se a alocação falhar
    }
    novo_no->valor = valor;
    novo_no->prox = NULL;
    
    return novo_no;
}
//funcao que insere no inicio e fim da lista
int insereInicioFim(tipo_no **lst, int valor){
    tipo_no *end = alocaNO(valor);
    tipo_no *first = alocaNO(valor);
    
    
    //se a lista estiver vazia
    if(*lst == NULL){
        (*lst) = first;
        first->prox = end; // conecta o primeiro novo ao ultimo

    }else{;
        //inserção no início
        first->prox = (*lst);
        (*lst) = first;
        //percorre ate o final
        tipo_no *aux = (*lst);
        while(aux->prox !=  NULL){
            aux = aux->prox;
        }
        aux->prox = end;
    }
    return 1;
}
void imprimeLista(tipo_no *lst) {
    tipo_no *aux = lst;
    while (aux != NULL) {
        printf("%d-> ", aux->valor);
        aux = aux->prox;
    }
    printf("NULL\n");
}
/*
// Liberação de memória
void liberaLista(tipo_no *lst) {
    tipo_no *aux;
    while (lst != NULL) {
        aux = lst;
        lst = lst->prox;
        free(aux);
    }
}
*/
int main() {
    tipo_no *minha_lista = NULL;

    insereInicioFim(&minha_lista, 2);
    insereInicioFim(&minha_lista, 50);

    imprimeLista(minha_lista);
    //liberaLista(minha_lista);

    return 0;
}