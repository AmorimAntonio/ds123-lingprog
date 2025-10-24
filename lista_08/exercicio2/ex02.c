#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, i;
    int *vetor1, *vetor2, *vetorConcat;

    // Le os tamanhos dos dois vetores
    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &n1);

    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d", &n2);

    // Aloca os dois vetores dinamicamente
    vetor1 = (int *) malloc(n1 * sizeof(int));
    vetor2 = (int *) malloc(n2 * sizeof(int));

    if (vetor1 == NULL || vetor2 == NULL) {
        printf("Erro ao alocar a memoria.\n");
        return 1;
    }

    // Preenche os vetores com valores
    printf("\nPreencha o primeiro vetor:\n");
    for (i = 0; i < n1; i++) {
        printf("vetor1[%d]: ", i);
        scanf("%d", &vetor1[i]);
    }

    printf("\nPreencha o segundo vetor:\n");
    for (i = 0; i < n2; i++) {
        printf("vetor2[%d]: ", i);
        scanf("%d", &vetor2[i]);
    }

    // Cria o terceiro vetor (concatenacao)
    vetorConcat = (int *) malloc((n1 + n2) * sizeof(int));
    if (vetorConcat == NULL) {
        printf("Erro ao alocar a memoria.\n");
        free(vetor1);
        free(vetor2);
        return 1;
    }

    // Copia os elementos do primeiro vetor
    for (i = 0; i < n1; i++) {
        vetorConcat[i] = vetor1[i];
    }

    // Copia os elementos do segundo vetor
    for (i = 0; i < n2; i++) {
        vetorConcat[n1 + i] = vetor2[i];
    }

    // Exibe o vetor concatenado
    printf("\nVetor concatenado:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", vetorConcat[i]);
    }
    printf("\n");

    // Libera toda a memoria
    free(vetor1);
    free(vetor2);
    free(vetorConcat);

    return 0;
}
