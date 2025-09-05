//operadores em C
// vetores e matrizes em C
// Manipulação de strings
// ponteiros
//
//Exercicio 1: Calculadora de Média com validação
//média de 3 notas de um alune, so notas de 0 a 10

#include <stdio.h>

int main (){
    float notas[3];
    float media;
    float testenota;
    int cont = 0;

    do    
    {
        printf("Digite a nota %d: ", cont+1);
        scanf("%f", &testenota);

        if (testenota > 0 && testenota <= 10){
            notas[cont] = testenota;
            cont += 1;
        }
        else{
            printf("Nota inválida, tente novamente. ");
        }

    }while (cont<3);
    


    for (int i = 0; i < 3; i++)
    {
        printf("Nota %d = %.2f; ", i+1, notas[i]);
    }
    
    testenota = 0;

    for (int i = 0; i < 3; i++)
    {
        testenota = testenota + notas[i];
    }
    
    media = testenota/3;
    printf("\nMedia das notas = %.2f", media);
    printf("\nSituacao: %s\n", (media >= 7.0) ?  "Aprovado": (media >= 5.0) ? "Recuperacao": "Reprovado");

    return 0; 

}




