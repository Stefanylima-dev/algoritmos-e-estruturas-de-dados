#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include "lista.h"

int main(void) {
    pilha* P = pilha_cria();
    pilha_insere(P, 10);
    pilha_insere(P, 15);
    pilha_insere(P, 20);
    pilha_insere(P, 30);
    pilha_insere(P, 40);
    pilha_imprime(P);
    int numero = pilha_retira(P);
    printf("valor retirado: %d\n",numero);
    pilha_imprime(P);
    return 0;
}
