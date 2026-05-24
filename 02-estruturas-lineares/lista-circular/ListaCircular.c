#include "ListaCircular.h"

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
		novo -> prox = novo;
		novo -> ant = novo;
		return novo;
	}
	else {
		novo->prox = L;
		novo->ant = L->ant;
		L->ant->prox = novo;
		L->ant = novo;

		return novo;
	}
}


void lst_imprime(lista* L) {
	printf("\n Lista: ");
	lista* p=L;
	do{
	    printf("%d ", p -> info);
	    p=p->prox;
	
	    }while(p!= L);
}

void lst_exclui(lista* L) {
    lista* p=L;
    lista* atual;
    if(p==NULL){
        printf("A lista já está vazia");
        return;
    }
    do{
        atual = p->prox;
        free(p);
        p=atual;
        
    }while(p!=L);
}

lista* lst_limpa(lista* L){
    lst_exclui(L); 
    return NULL;   
}


lista* lst_retira(lista* L, int v) {
    if (L == NULL){
        printf("A lista está vazia");
    return NULL;}
    lista* p = L;

    do {
        if (p->info == v) break;
        p = p->prox;
    } while (p != L);

    
    if (p->info != v) return L;

    
    if (p->prox == p) {
        free(p);
        return NULL;
    }

    p->ant->prox = p->prox;
    p->prox->ant = p->ant;

    if (p == L) L = p->prox; 

    free(p);
    return L;
}