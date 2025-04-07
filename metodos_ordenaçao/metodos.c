#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


void BubbleSort(tipo_lista *lst){
    int i,troca, aux;
    for(i = 0; i < lst->contador-1; i++){
        for (troca = 0; troca<lst->contador-2-i; troca++){
            if(lst->lista[troca] > lst->lista[troca+1]){
                aux = lst->lista[troca];
                lst->lista[troca]= lst->lista[troca+1];
                lst->lista[troca+1]= aux;
            }
        }
    }


}
int main(){
    tipo_lista minha_lista;
    minha_lista.contador = 0;

    insere_fim_lista(&minha_lista, 80);
    insere_fim_lista(&minha_lista, 20);
    insere_fim_lista(&minha_lista, 60);
    insere_fim_lista(&minha_lista, 30);
    insere_fim_lista(&minha_lista, 10);
    insere_fim_lista(&minha_lista, 40);
    insere_fim_lista(&minha_lista, 50);
    insere_fim_lista(&minha_lista, 90);
    insere_fim_lista(&minha_lista, 70);
    insere_fim_lista(&minha_lista, 100);

    //BubbleSort(&minha_lista);
    printf("Lista desordenada!\n");
    imprime_lista(minha_lista);
    printf("Ordenando atraves bubble sort\n");
    BubbleSort(&minha_lista);
    imprime_lista(minha_lista);

    return 0;
}