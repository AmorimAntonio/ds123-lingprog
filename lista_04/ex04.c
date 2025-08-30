#include <stdio.h>

// Função para calcular estatísticas de um array de notas
void calcular_estatisticas(float *notas, int quantidade, float *media, float *maior, float *menor) {
    
    
    float soma = 0.0; // calculando a soma para calcular a média
    *maior = *notas;  // inicializando os ponteiros
    *menor = *notas; 

    for (int i = 0; i < quantidade; i++) {
        soma += *(notas + i);  // somando com o ponteiro

        if (*(notas + i) > *maior) { //verificando a maior
            *maior = *(notas + i);
        }
        if (*(notas + i) < *menor) { //verificando a menor
            *menor = *(notas + i);
        }
    }

    *media = soma / quantidade; //calculando a media
}

int main() {
    float notas[] = {8.5, 7.2, 9.1, 6.8, 8.9, 7.7, 9.5, 8.2};
    int qtd_notas = sizeof(notas) / sizeof(notas[0]);

    float media, maior, menor;

    calcular_estatisticas(notas, qtd_notas, &media, &maior, &menor);

    printf("=== RELATORIO DE NOTAS ===\n");
    printf("Notas: ");
    for (int i = 0; i < qtd_notas; i++) {
        printf("%.1f ", notas[i]);
    }

    printf("\n");
    printf("Media: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);

    return 0;
}
