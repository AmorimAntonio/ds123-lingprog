//1. Criar um prog que leia 4 num armazene em um vetor e calcule a média
//2. Ler 5 numeros e mostrar apenas os numeros maiores que 10

#include <stdio.h>

int main(){

    int num[4];

    printf("===Digite os numeros===\n");

    for (int i = 0; i < 4; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &num[i]);
    }

    int soma = 0;
    for (int i = 0; i < 4; i++){
        soma = soma + num[1];
    }

    printf("Media = %d", soma/4);


    return 0;
}