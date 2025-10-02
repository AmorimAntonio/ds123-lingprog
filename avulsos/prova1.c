/*
Exercício 3: Sistema de Avaliação Escolar
Objetivo: Combinar operadores com matriz bidimensional

Crie um sistema que gerencie notas de uma turma:

Matriz 5x4 (5 alunos, 4 bimestres)
Calcule a média de cada aluno
Determine status: Aprovado (>=7), Recuperação (5-6.9), Reprovado (<5)
Encontre o aluno com maior e menor média
Use operadores ternários para classificação
*/

#include <stdio.h>

#define aluno 5
#define bimestre 4
int main (){
    float matriz[aluno][bimestre];
    float medias[aluno] = {0,0,0,0,0};

    for(int i = 0; i < aluno; i++){
        for(int j = 0; j < bimestre; j++){
            printf("Digite a nota %d do aluno %d: ", j+1, i+1);
            scanf("%f", &matriz[i][j]);
            medias[i] = medias[i] + matriz[i][j];
        }
        printf("\n== Aluno %d ==\n", i+1);
    }

    for(int i = 0; i < aluno; i++){
        medias[i] = medias[i]/aluno;
        printf("\nAluno %d, media = %.2f\n", i+1, medias[i]);
    }


}