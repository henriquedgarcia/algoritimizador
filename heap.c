#include "algo.h"
#include "heap.h"

Inteiro inicio(){
    Inteiro itens[] = {12, 56, 62, 32, 14, 2, 9, 17, 13, 22, 28, 36};
    array = itens;
    escreva("Sem ordenar: ");
    para(Inteiro i = 0; i < 12; i++) {
        escreva("%d, ", array[i]);
        }
    escreva("\n");
    
    heapSort();
    escreva("Ordenado: ");
    para(Inteiro i = 0; i < 12; i++) {
        escreva("%d, ", array[i]); 
        }
    escreva("\n");
}

// funções auxiliares
Logico estaNoHeap(Indice no){
    retorna no < tamanho_heap;
}

Vazio troca(Indice no1, Indice no2){
    No tmp = array[no1];
    array[no1] = array[no2];
    array[no2] = tmp; 
}

// funções de acesso
Inteiro pai(Indice no){
    retorna piso((no-1)/2);
}
Inteiro esquerdo(Indice no){
    retorna 2 * no + 1;
}
Inteiro direito(Indice no){
    retorna 2 * no + 2;
}
Inteiro valor(Indice no){
    retorna array[no];
}

// funções principais
Vazio maximizaHeap(Indice no) {
    Indice filho_esquerdo = esquerdo(no);
    Indice filho_direito = direito(no);

    Indice maior = no;
    se(estaNoHeap(filho_direito) && valor(filho_direito) > valor(maior))
        maior = filho_direito;
    se(estaNoHeap(filho_esquerdo) && valor(filho_esquerdo) > valor(maior)) 
        maior = filho_esquerdo;

    se(maior != no){
        troca(no, maior);
        maximizaHeap(maior);
    }
}

Vazio montaHeapMaximo (){
    tamanho_heap = tamanho_array;
    Inteiro meio = piso((tamanho_array-1)/2);
    para (Indice no = meio; no >= 0; no--){
        maximizaHeap(no);
    }
}

Vazio heapSort(){
    montaHeapMaximo();
    tamanho_heap--;
    para (Indice no = tamanho_heap; no > 0; no--){
        // Troca o primeiro com o último
        troca(0, tamanho_heap);
        tamanho_heap--;
        maximizaHeap(0);
    }
}
