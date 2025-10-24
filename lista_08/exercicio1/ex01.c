#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *vetor;

    // Solicita ao usuário quantos numeros ele quer digitar
    printf("Quantos numeros voce ira digitar? ");
    scanf("%d", &n);

    // Aloca dinamicamente o vetor com malloc
    vetor = (int *) malloc(n * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1; // encerra o programa se falhar
    }

    // Lendo os números
    printf("Digite os %d numeros:\n", n);
    for (i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Exibe apenas os números pares
    printf("\nNumeros pares digitados:\n");
    for (i = 0; i < n; i++) {
        if (vetor[i] % 2 == 0) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");

    // Libera a memória alocada
    free(vetor);

    return 0;
}
