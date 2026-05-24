#include "listaDuplamenteEncadeada.h"

#include <stdio.h>
#include <stdlib.h>

lista* lst_cria_elemento(int valor) {
    lista* novo = (lista*)malloc(sizeof(lista));
    if (novo == NULL) {
        printf("Erro ao alocar memoria");
        exit(1);
    }
    novo->info = valor;
    novo->prox = NULL;
    novo->ant = NULL;
    return novo;
}

lista* lst_insere(lista* L, int valor) {
    lista* novo = lst_cria_elemento(valor);
    if (L == NULL) {
        return novo;
    }
    else {
        L->ant = novo;
        novo->prox = L;
        return novo;
    }
}

void lst_busca_elemento(lista* L, int valor) {
    lista* p;
    for (p=L; p!=NULL && p->info != valor; p=p->prox);
    if (p == NULL) {
        printf("Elemento nao encontrado\n");
    }
    else {
        printf("O elemento %d está na lista", p->info);
    }
}

void lst_imprime(lista* L) {
    printf("\n Lista: ");
    for (lista* p=L; p!=NULL; p=p->prox) {
        printf(" %d", p->info);
    }
}

void lst_limpa(lista* L) {
    for (lista* p=L; p!=NULL; p=p->prox) {
        lista* atual = p;
        free(atual);
    }
}

lista* lst_retira(lista* L, int v){
    lista* p, *ant ;

    for(p=L, ant=NULL; p!=NULL && p->info!=v; p=p->prox){            
        ant=p;
        }

   
    if(p==NULL){
        return L;
    }

    else if (p == L) { 
        L = p->prox;     
        if (L != NULL) { 
            L->ant = NULL;
        }
    }
    else if(ant!= NULL && p->prox!=NULL){
        ant->prox = p->prox;
        p->prox->ant = p->ant;
    }
    
    else{
        ant->prox=NULL;
    }
    free(p);
    return L;
}