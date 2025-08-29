// Declaração de ponteiros

#include <stdio.h>

int main(){
    int numero = 42; // variavel "normal"
    int *ptr;        // declaração de ponteiro para int
    
    ptr = &numero;  // ptr recebe o endereço de número

    printf("Valor de numero: %d\n", numero);
    printf("Endereco de numero: %p\n", &numero);
    printf("Valor de ptr: %p\n", ptr);
    printf("Valor apontado pelo ponteiro: %d\n", *ptr);

    return 0;
    
}
