#ifndef ALGORITMIZADOR
#define ALGORITMIZADOR

#include <stdio.h>

// Palavras-chaves especiais
#define estrutura struct
#define enumeracao enum
#define uniao union
#define definetipo typedef
#define retorna return
#define sair break
#define continue continue
#define padrao default

// tipos
#define Cadeia char*
#define Vetor int*
#define Array int*
#define Inteiro int
#define Logico int
#define No int
#define Indice int
#define Real float
#define Vazio void
#define Caractere char
#define automatico auto
#define duplo double
#define curto short
#define longo long

// modificadores
#define constante const
#define externo extern
#define registrador register
#define comsinal signed
#define semsinal unsigned
#define estatico static
#define volatil volatile

// Repetição e seleção
#define enquanto(x) while(x)
#define para(x) for(x)
#define faca do
#define vapara goto
#define se(x) if(x)
#define senao else
#define escolha switch
#define caso case

// Funções
#define new(n, type) (type *) malloc(n*sizeof(type)) 
#define piso(x) ((int)(x))
#define escreva printf
#define inicio(x) main(x)
#define tamanho(x) sizeof(x)

// Outros
#define ok 0
#define verdadeiro 1
#define falso 0


#endif