#include <stdio.h>

int main(){

    int matriz[2][3]; //linha, coluna

    //entrada de dados
    printf("Digite os elementos da matriz 2x3:\n");

    for(int i = 0; i < 2; i++){ // linha
        for(int j=0;j< 3; j++){ // coluna
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //exibicao

    printf("\nMatriz digitada:\n");
    for(int i = 0; i < 2; i++){
        for(int j=0;j< 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n"); //quando mudar linha, pula linha
    }


    return 0;
}

