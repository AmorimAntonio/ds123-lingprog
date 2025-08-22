#include <stdio.h>

int main(){

    int notas[3];

    //entrada de dados
    printf("Digite 3 notas: \n");

    int soma = 0;

    for (int i = 0; i < 3; i++){
        printf("Digite a nota %d: ", i+1);
        scanf("%d", &notas[i]);
    }


    for (int i = 0; i < 3; i++){
        soma += notas[i];
    }

    //Soma dos elementos
    printf("Soma total: %d\n", soma);


    int maior = notas[0];
    for (int i = 0; i < 3; i++){ 
        if(notas[i]>maior){
            maior = notas[i];
        }
    }

    printf("Maior nota: %d\n", maior);

    return 0;
}