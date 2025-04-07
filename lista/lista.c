#include <stdio.h>
#include <stdlib.h>

struct ponto{
    float x;
    float y;
    struct ponto *prox;
};
typedef struct ponto tipo_ponto;

tipo_ponto *listaPontos; 

// funcao q adiciona novos ponteiros
void InsereInicio(float x, float y){
    tipo_ponto *p = (tipo_ponto *)malloc(sizeof(tipo_ponto)); // cria nova estrutura de pontos
    p->x = x;
    p->y = y;

    p->prox = listaPontos; 
    listaPontos = p; 
} 
void InsereFim(float x, float y){
    tipo_ponto *p = (tipo_ponto *)malloc(sizeof(tipo_ponto));
    p->x = x;
    p->y = y;
    p->prox = NULL;
    if(listaPontos == NULL){
        listaPontos = p;
    }else{
        tipo_ponto *aux = listaPontos;
        while(aux->prox != NULL ){
            aux = aux->prox;
        }
        aux->prox = p;
    }

}

void imprime(tipo_ponto *p){
    tipo_ponto *aux = listaPontos;
    
    if(p!= NULL){
        printf("Ponto(%.1f, %.1f)\n", aux->x, aux->y);
        imprime(p->prox);
        //aux = aux->prox;
    }
}
int main(){

    InsereInicio(1,5);
    InsereInicio(2,7);
    InsereInicio(5,3);
    InsereFim(1,1);
    
    tipo_ponto *aux = listaPontos;
    //printf("%.0f ", listaPontos->x);
    imprime(aux);

    return 0;
}