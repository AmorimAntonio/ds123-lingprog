#include <stdio.h>

int encontrar_maior(int *array, int tamanho) {
    int *ptr = array;           // ponteiro que percorre o array
    int *maior = array;         // ponteiro que guarda o endereço

    for (int i = 1; i < tamanho; i++) {
        ptr++;  //verificando cada elemento
        if (*ptr > *maior) {
            maior = ptr;  // atualizando o ponteiro do maior
        }
    }

    return *maior;  // retornao o valor do maior
}

int main() {
    int numeros[] = {45, 23, 78, 12, 67, 34, 89, 56};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    int maior = encontrar_maior(numeros, tamanho);

    printf("Array: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\nMaior elemento: %d\n", maior);

    return 0;
}
