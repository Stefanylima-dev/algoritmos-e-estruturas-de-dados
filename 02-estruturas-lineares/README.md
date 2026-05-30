# 📏 Estruturas de Dados Lineares

Nesta pasta estão concentrados alguns dos meus estudos e implementações de estruturas de dados lineares desenvolvidas na linguagem C. 

As estruturas lineares organizam os elementos em uma sequência lógica unidimensional, onde cada nó possui um único predecessor e um único sucessor (com exceção das extremidades). O foco deste módulo foi entender o funcionamento dos ponteiros, a alocação dinâmica de memória e o reúso de código.

---

## 📚 Estruturas Implementadas

### 1. Lista Duplamente Encadeada
* **Arquivos:** `main(3).c`,`listaDuplamenteEncadeada.c`, `lista.h`
* **Conceito:** É uma estrutura de dados dinâmica onde cada nó (elemento) contém o dado armazenado (`info`) e **dois ponteiros de controle**: um apontando para o próximo elemento (`prox`) e outro para o elemento anterior (`ant`).
* **Vantagem:** Permite a navegação bidirecional (para frente e para trás) de forma simples e eficiente, facilitando operações de inserção e remoção em qualquer posição da lista sem a necessidade de percorrer a estrutura inteira desde o início.

### 2. TAD Pilha com Lista Duplamente Encadeada
* **Arquivos:** `main.c`, `pilha.c`, `pilha.h` (utilizando as funções de `lista.c` / `lista.h`)
* **Conceito:** Implementação de uma Pilha Dinâmica que segue a regra **LIFO** (*Last In, First Out* — o último elemento a entrar é o primeiro a sair). As operações de inserção (*Push*) e remoção (*Pop*) acontecem obrigatoriamente na mesma extremidade: o **topo** (início).
* **Diferencial Técnico:** Este código foi construído utilizando o conceito de **reúso de código**. A estrutura da Pilha funciona como uma interface abstrata que gerencia e manipula os ponteiros de uma Lista Duplamente Encadeada.

### 3. Lista Encadeada Circular
* **Arquivos:** `main(4).c``ListaCircular.c`,`ListaCircular.h`
* **Conceito:** Uma variação da lista encadeada clássica onde o **último nó não aponta para `NULL`**, mas sim de volta para o **primeiro nó** da lista, fechando um ciclo lógico na memória.
* **Vantagem:** Permite percorrer a lista inteira indefinidamente a partir de qualquer ponto de partida, sendo ideal para sistemas que operam em rodízio (como buffers de áudio, alternância de jogadores em jogos de turno ou escalonamento de processos de sistemas operacionais).

---

