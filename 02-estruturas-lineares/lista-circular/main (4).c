
#include <stdio.h>
#include "ListaCircular.h"

int main(void)
{
    lista* L = NULL;
    
    L = lst_insere(L, 50);
    L = lst_insere(L, 30);
    L = lst_insere(L, 40);
    L = lst_insere(L, 90);
    L = lst_insere(L, 70);

    lst_imprime(L);
    
    L = lst_retira(L, 70); 
    L = lst_retira(L, 40); 
    L = lst_retira(L, 50); 
    
    L= lst_limpa(L);
   
    
    return 0;
}
