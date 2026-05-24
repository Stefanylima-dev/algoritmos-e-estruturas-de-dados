#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H

struct listaCircular {
	int info;
	struct listaCircular *prox;
	struct listaCircular *ant;
};
typedef struct listaCircular lista;

lista* lst_cria_elemento(int valor);
lista* lst_insere(lista* L, int valor);
void lst_imprime(lista* L);
void lst_exclui(lista* L);
lista* lst_limpa(lista* L);
lista* lst_retira(lista* L, int v);
#endif 
