#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define ALUNOS 5
#define DISCIPLINAS 4
#define MEDIA_APROVACAO 6.0f

// Declaracao das funcoes
void inserir_notas(float notas[][DISCIPLINAS]);
void exibir_notas(const float notas[][DISCIPLINAS]);
float calcular_media_aluno(const float notas[][DISCIPLINAS], int aluno);
float calcular_media_disciplina(const float notas[][DISCIPLINAS], int disc);
void situacao(float media); // imprime situacao
void exibir_relatorio_final(const float notas[][DISCIPLINAS]);
void menu(void);
int verifyOp(void);

typedef struct{
    char nome[50];
    float nota;
} Aluno;


int main() {
    int x;
    float *notas;
    int op;

    printf("Digite quantos alunos deseja cadastrar");
    scanf("%d", &x);

    notas = (int *) malloc(x * sizeof(float));

    if (notas == NULL){
        printf("Erro ao realocar\n");
        return 1;
    }

    do {
        menu();
        op = verifyOp();

        switch (op) {
            case 1:
                inserir_notas(notas);
                break;
            case 2:
                exibir_notas(notas);
                break;
            case 0:
                printf("\nSaindo...\n");
                break;
        }
    } while (op != 0);

    return 0;
}

int verifyOp(void) {
    int op;
    printf("Opcao: ");
    if (scanf("%d", &op) != 1) {
        op = 0;
    }
    while (op < 0 || op > 5) {
        printf("Opcao invalida. Digite novamente: ");
        if (scanf("%d", &op) != 1) {
            op = 0;
        }
    }
    return op;
}


void menu(void) {
    printf("\n=== SISTEMA DE NOTAS ===\n");
    printf("1. Inserir notas\n");
    printf("2. Exibir notas\n");
    printf("3. Calcular medias por aluno\n");
    printf("4. Calcular medias por disciplina\n");
    printf("5. Exibir relatorio final\n");
    printf("0. Sair\n");
}


void inserir_notas(x, notas[]){
    for (int i = 0; i < x; i++)
    {
        printf("Insira a nota %d: ", i+1);
        scanf("%f", notas[i])
    }
}


/*

// Funções

// Inserir notas 

// Exibir matriz
void exibir_notas(const float notas[][DISCIPLINAS]) {
    printf("\nMatriz de notas:\n");
    for (int i = 0; i < ALUNOS; i++) {
        printf("Aluno %d: [", i+1);
        for (int j = 0; j < DISCIPLINAS; j++) {
            printf("%.2f", notas[i][j]);
            if (j < DISCIPLINAS-1) printf(", ");
        }
        printf("]\n");
    }
}

// Media por aluno 
float calcular_media_aluno(const float notas[][DISCIPLINAS], int aluno) {
    float soma = 0.0f;
    for (int j = 0; j < DISCIPLINAS; j++) soma += notas[aluno][j];
    return soma / (float)DISCIPLINAS;
}

// Media por disciplina
float calcular_media_disciplina(const float notas[][DISCIPLINAS], int disc) {
    float soma = 0.0f;
    for (int i = 0; i < ALUNOS; i++) soma += notas[i][disc];
    return soma / (float)ALUNOS;
}

// Situacao por media 
void situacao(float media) {
    if (media >= 7.0f) {
        printf("Aprovado");
    } else if (media >= 5.0f) {
        printf("Recuperacao");
    } else {
        printf("Reprovado");
    }
}

// Relatorio final completo
void exibir_relatorio_final(const float notas[][DISCIPLINAS]) {
    float medias[ALUNOS];
    float highest = 0.0f, lowest = 0.0f;
    int idx_high = 0, idx_low = 0;

    // calcula medias e encontra maior/menor
    for (int i = 0; i < ALUNOS; i++) {
        medias[i] = calcular_media_aluno(notas, i);
        if (i == 0) {
            highest = lowest = medias[i];
            idx_high = idx_low = 0;
        } else {
            if (medias[i] > highest) { highest = medias[i]; idx_high = i; }
            if (medias[i] < lowest)  { lowest  = medias[i]; idx_low  = i; }
        }
    }

    // cabecalho
    printf("\n===== RELATORIO FINAL =====\n");
    exibir_notas(notas);

    // medias por aluno + situacao
    printf("\nMedias por aluno:\n");
    for (int i = 0; i < ALUNOS; i++) {
        printf("Aluno %d: media = %.2f | ", i+1, medias[i]);
        situacao(medias[i]);
        printf("\n");
    }

    // medias por disciplina
    printf("\nMedias por disciplina:\n");
    for (int j = 0; j < DISCIPLINAS; j++) {
        float m = calcular_media_disciplina(notas, j);
        printf("Disciplina %d: media = %.2f\n", j+1, m);
    }

    // maior e menor media
    printf("\nMaior media: Aluno %d (%.2f)\n", idx_high+1, highest);
    printf("Menor media: Aluno %d (%.2f)\n", idx_low+1, lowest);

    // aprovados/reprovados
    printf("\nAprovados/Reprovados:\n");
    for (int i = 0; i < ALUNOS; i++) {
        printf("Aluno %d -> ", i+1);
        situacao(medias[i]);
        printf("\n");
    }
}

// Interface




*/
