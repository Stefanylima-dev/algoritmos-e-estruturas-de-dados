#ifndef LISTA_H
#define LISTA_H

typedef struct lista_int {
    int info;
    struct lista_int *prox;
    struct lista_int *ant;
}lista;
lista* lst_cria_elemento(int valor);
lista* lst_insere(lista* L, int valor);
lista* lst_cria();
int lst_vazia(lista* L);
void lst_imprime_elemento(lista* L);
void lst_imprime(lista* L);

#endif //LISTA_H