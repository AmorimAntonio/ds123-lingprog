#include <stdio.h>

// operadores em C
// vetores e matrizes em C
// manipulação de string
// ponteiros

int main(){
    int numero = 42;
    int *ptr; // O ponteiro ptr pode armazenar o endereço de uma variavel int

    ptr = &numero; //O operador & pega o end da var numero e armazena

    printf("=== Conceitos básicos ===\n");
    printf("Val arm na var num: %d\n", numero);
    printf("Endereço de numero: %p\n", (void*)&numero);
    printf("Valor de ptr(endereço que aponta): %p\n", (void*)ptr);
    printf("Valor apontado pelo ponteiro: %d\n", *ptr);
    printf("Endereco do proprio ptr: %p\n", &ptr);

    // Modifciando o valro atraves do ptr
    *ptr = 100;
    printf("\nApos *ptr = 100\n");
    printf("Valor de numero: %d\n", numero);
    printf("Valor apontado por ptr: %d\n", *ptr);

    // Aritmetica de ponteiros
    int vetor[5]={10,20,30,40,50};
    int *ptrVetor = vetor;

    printf("\n=== Aritmetica de ponteiros ====\n");
    printf("Enderecos e valores do vetor: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("vetor[%d]: endereco %p, valor: %d\n", i+1,(void*)(ptrVetor+i),*(ptrVetor+i));        
    }
    

    return 0;
}