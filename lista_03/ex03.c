//Criar uma matriz 2×2, preenchê-la e encontrar o maior elemento.

#include <stdio.h>

int main(){
    int matriz[2][2];

    printf("\n=== Insira os valores da matriz ===\n");
    //entrada de valores
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){  
            printf("Digite o valor para [%d][%d]: ",i+1,j+1);
            scanf("%d", &matriz[i][j]);    
        }
    }

    int maior = matriz[0][0];
    //identificando o maior
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){  
            if(maior<matriz[i][j]){
                maior = matriz[i][j];
            }
        }
    }
    
    //exibindo
    printf("\nMaior valor = %d\n", maior);



    return 0;
}

