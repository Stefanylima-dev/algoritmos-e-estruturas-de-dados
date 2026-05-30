#ifndef FILA_H
#define FILA_H
#include "lista.h"

typedef struct pilha {
    lista *inicio;
    lista *fim;
}pilha;
pilha* pilha_cria();
void pilha_insere(pilha* P, int valor);
int pilha_retira(pilha* P);
void pilha_imprime(pilha* P);

#endif //FILA_H