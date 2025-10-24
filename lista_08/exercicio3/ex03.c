#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char **lista;
    int tamanho = 2;
    int i;
    char opcao;
    char temp[100];

    // Aloca espaco inicial para 2 strings
    lista = (char **) malloc(tamanho * sizeof(char *));
    if (lista == NULL) {
        printf("Erro na alocacao de memoria.\n");
        return 1;
    }

    // Le as duas primeiras palavras
    printf("Digite as 2 primeiras palavras:\n");
    for (i = 0; i < tamanho; i++) {
        printf("Item %d: ", i + 1);
        scanf("%s", temp);
        lista[i] = (char *) malloc((strlen(temp) + 1) * sizeof(char));
        strcpy(lista[i], temp);
    }

    // Permite adicionar mais itens dinamicamente
    while (1) {
        printf("Deseja adicionar outro item? (n para sair): ");
        scanf(" %c", &opcao);

        if (opcao == 'n' || opcao == 'N') {
            break;
        }

        // Aumenta o tamanho da lista
        tamanho++;
        char **tempLista = realloc(lista, tamanho * sizeof(char *));
        if (tempLista == NULL) {
            printf("Erro ao realocar memoria.\n");
            for (i = 0; i < tamanho - 1; i++) free(lista[i]);
            free(lista);
            return 1;
        }
        lista = tempLista;

        // Lê o novo item
        printf("Item %d: ", tamanho);
        scanf("%s", temp);
        lista[tamanho - 1] = (char *) malloc((strlen(temp) + 1) * sizeof(char));
        strcpy(lista[tamanho - 1], temp);
    }

    // Exibe todos os itens
    printf("\nItens digitados:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%s ", lista[i]);
    }
    printf("\n");

    // Libera memoria
    for (i = 0; i < tamanho; i++) {
        free(lista[i]);
    }
    free(lista);

    return 0;
}
