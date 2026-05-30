#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "pilha.h"

pilha* pilha_cria() {
	pilha* novo = (pilha*)malloc(sizeof(pilha));
	if(novo == NULL) {
		printf("Erro ao alocar memoria");
		exit(1);
	}
	novo->inicio = NULL;
	novo->fim = NULL;
	return novo;
}
//correto
void pilha_insere(pilha* P, int valor) {
	lista *novo = lst_cria_elemento(valor);

	if(P->inicio == NULL) { // caso a fila esteja vazia
		//lista* L = lst_cria();
		P->inicio = novo;
		P->fim = novo;
	}
	else {
		novo->prox = P->inicio;
		P->inicio->ant = novo;
		P->inicio = novo;
	}
}
//correto
int pilha_retira(pilha* P) {
	if(P->inicio == NULL) { // verificando se lista está vazia
		printf("A fila está vazia!\n");
		exit(1);
	}

	int valor = P->inicio->info;
	lista* removido = P->inicio;

	P->inicio = removido->prox;

	if (P->inicio == NULL) {
		P->fim = NULL;
	} else {
		P->inicio->ant = NULL;
	}

	free(removido);
	return valor;
}

void pilha_imprime(pilha* P) {
	printf("\n");
	printf("conteudo da pilha {\n");
	lst_imprime(P->inicio);
	printf("}\n");
}

