#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[50];
    float nota;
} Aluno;

int main(){
    int quantidade; 
    Aluno *turma;
    int i;

    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &quantidade);

    turma = (Aluno*) malloc(quantidade * sizeof(Aluno));

    if (turma==NULL)
    {
        printf("Erro ao alocar memória\n");
        return 1;
    }
 
    
    for (int i = 0; i < quantidade; i++)
    {
        printf("\n--- Aluno %d ---\n", i + 1);
        printf("Nome: ");
        scanf(" %49[^\n]", turma[i].nome);
        printf("Nota: ");
        scanf("%f", &turma[i].nota);
    }
    
    printf("\n === Relatorio da turma ===\n");
    float soma = 0;
    for (int i = 0; i < quantidade; i++)
    {
        printf("%s: %.2f\n", turma[i].nome, turma[i].nota);
        soma += turma[i].nota;
    }
    
    printf("Media da turma = %.2f", soma/quantidade);

}






/*
malloc() - memory allocation
estrutura generica
precisa da stdlib
void* malloc(size_t tamanho)

//Alocação estática
//int vetor[100]; 
//Alocada na pilha
//Liberada automaticamente ao sair do escopo 
//Não pode mudar de tamanho

int main(){
    int *vetor;
    int tamanho = 3;

    // Alocação inicial
    vetor = (int *) malloc(tamanho * sizeof(int));
    vetor[0] = 10;
    vetor[1] = 10;
    vetor[2] = 10;
    
    printf("Vetor original (3 elementos): ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d", vetor[i]);
    }
    
    tamanho = 5;
    vetor = (int*) realloc(vetor, tamanho * sizeof(int));
    
    if (vetor == NULL){
        printf("Erro ao realocar\n");
        return 1;
    }

    vetor[3] = 40;
    vetor[4] = 50;

    printf("\n Vetor expandido (5 elementos)");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d", vetor[i]);
    }

    free(vetor);

    return 0;
    
}


int main(){
    int n;
    int *vetor;
    //Alocação dinâmica

    printf("Quantos elementos deseja? ");
    scanf("%d", &n);
    
    vetor = (int*) malloc(n * sizeof(int)); //Tamanho definido em execução
    //Liberada manualmente com free()
    //Flexibilidade: ela pode crescer ou diminuir

    if (vetor == NULL)
    {
        printf("ERRO: memória insuficiente\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        vetor[i] = i * 2;
        printf("Vetor[%d] = %d\n", i, vetor[i]);
    }
    
    free(vetor);
    

    return 0;
}



// calloc() = Contiguos Allocation
// void* calloc()

int main(){
    int n = 5;

    int *v1 = (int*) malloc(n * sizeof(int));
    int *v2 = (int*) calloc(n, sizeof(int));
    printf("Com malloc: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", v1[i]);
    }
    
    printf("\nCom calloc: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", v2[i]);
    }
    
    free(v1);
    free(v2);

    return 0;
}



*/

