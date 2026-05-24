#ifndef LISTADUPLAMENTEENCADEADA_H
#define LISTADUPLAMENTEENCADEADA_H

struct listaDuplamenteEncadeada {
	int info;
	struct listaDuplamenteEncadeada *prox;
	struct listaDuplamenteEncadeada *ant;
};
typedef struct listaDuplamenteEncadeada lista;

lista* lst_cria_elemento(int valor);
void lst_busca_elemento(lista* L, int valor);
lista* lst_insere(lista* L, int valor);
void lst_imprime(lista* L);
void lst_limpa(lista* L);
lista* lst_retira(lista* L, int v);
#endif //LISTADUPLAMENTEENCADEADA_H
