#include "lista.h"
#include <stdio.h>
#include <stdlib.h>


lista* lst_cria_elemento(int valor){
    lista* novo = (lista*)malloc(sizeof(lista));
    if(novo == NULL){
        printf("Erro ao alocar memoria");
        exit(1);
    }
    novo->info = valor;
    novo->prox = NULL;
    novo->ant = NULL;
    return novo;
}

lista* lst_insere(lista* L, int valor){
    lista* novo = lst_cria_elemento(valor);
    if (!lst_vazia(L)) { //se a lista não tiver vazia
        novo->prox = L;
        L->ant = novo;
    }
    return novo;
}

lista* lst_cria() {
    return NULL;
}

int lst_vazia(lista* L) {
    return L == NULL;
}

void lst_imprime_elemento(lista* L){
    printf("%d ",L->info);
}

void lst_imprime(lista* L){
    if(lst_vazia(L)){
        printf("Lista Vazia\n");
        return;
    }

    lista* p;
    printf("Lista encadeada: \n");
    for(p = L; p!=NULL; p=p->prox){
        lst_imprime_elemento(p);
    }
    printf("\n");
}