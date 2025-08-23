//Ler 5 números e mostrar apenas os números maiores que 10.

#include <stdio.h>

int main(){

    int num[5];

    //entrada dos valores
    printf("===Digite os numeros===\n");

    for (int i = 0; i < 5; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &num[i]);
    }

    //verificando e exibindo os numeros maiores que 10
    printf("Numeros maiores que 10: ");
    for (int i = 0; i < 5; i++){
        if(num[i]>10){
            printf(" %d; ", num[i]);
        }
    }

    return 0;
}