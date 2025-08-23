#include <stdio.h>

//Criar um programa que leia 4 números, armazene em um vetor e calcule a média.
int main(){

    int num[4]; //criando o vetor

    //entrada de dados
    printf("===Digite os numeros===\n");

    for (int i = 0; i < 4; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &num[i]);
    }

    //calculando a soma
    double soma = 0;
    for (int i = 0; i < 4; i++){
        soma = soma + num[i];
    }

    //exibindo o valor da média
    printf("Media = %.2f", soma/4);


    return 0;
}