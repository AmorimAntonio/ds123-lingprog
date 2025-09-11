/*
Objetivo: Combinar operadores com matriz bidimensional

Crie um sistema que gerencie notas de uma turma:

Matriz 5x4 (5 alunos, 4 bimestres)
Calcule a média de cada aluno
Determine status: Aprovado (>=7), Recuperação (5-6.9), Reprovado (<5)
Encontre o aluno com maior e menor média
Use operadores ternários para classificação
*/

#include <stdio.h>

int main (){
    float grades[5][4]; //matriz 5x4
    float average[5]; //variavel para a media
    float sum = 0; //variavel auxiliar da media
    float highest; //maior nota
    float lowest; //menor nota
    int numhigh; //aluno com a maior
    int numlow;  //aluno com a menor

    //entrada de dados
    for (int i = 0; i < 5; i++)
    {
        printf("\n===%do aluno: ====\n", i+1);
        for (int j = 0; j < 4; j++)
        {
            printf("Digite a nota %d do aluno %d: ", j+1, i+1);
            scanf("%f", &grades[i][j]);
        }
    }

    //calculando as medias
    for (int i = 0; i < 5; i++)
    {
        sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += grades[i][j];
        }
        average[i]=sum/4.00;

        if (i == 0) { //a primeira média define maior/menor
            highest = lowest = average[i];
            numhigh = numlow = i;
        }
        //armazenando a maior e a menor nota
        if (average[i] > highest) {
            highest = average[i];
            numhigh = i;
        }
        if (average[i] < lowest) {
            lowest = average[i];
            numlow = i;
        }
    }


    for (int i = 0; i < 5; i++)
    {

        printf("\n==== Aluno %d: ====\n", i+1);
        printf("Nota = %.2f", average[i]);
        printf("\nSituacao: %s\n", (average[i] >= 7.0) ?  "Aprovado": (average[i] >= 5.0) ? "Recuperacao": "Reprovado");
    }
    

    printf("\n======================================================== \n");
    printf("Estudante com a maior nota: aluno %d (%.2f)\n", numhigh+1,highest);
    printf("Estudante com a menor nota: aluno %d (%.2f)", numlow+1,lowest);

    return 0; 
}