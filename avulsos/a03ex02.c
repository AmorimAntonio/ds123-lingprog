//1. Criar um prog que leia 4 num armazene em um vetor e calcule a média
//2. Ler 5 numeros e mostrar apenas os numeros maiores que 10

#include <stdio.h>

int main(){

    int num[5];

    printf("===Digite os numeros===\n");

    for (int i = 0; i < 5; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &num[i]);
    }

    printf("Numeros maiores que 10: ");
    for (int i = 0; i < 5; i++){
        if(num[i]>10){
            printf(" %d; ", num[i]);
        }
    }

    return 0;
}