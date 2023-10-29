#ifndef HEAP
#define HEAP

#include "algo.h"

Array array;
Inteiro tamanho_heap;
Inteiro tamanho_array;

Logico estaNoHeap(Indice no);
Vazio troca(Indice no1, Indice no2);
Inteiro pai(Indice no);
Inteiro esquerdo(Indice no);
Inteiro direito(Indice no);
Inteiro valor(Indice no);
Vazio maximizaHeap(Indice no);
Vazio montaHeapMaximo ();
Vazio heapSort();

#endif