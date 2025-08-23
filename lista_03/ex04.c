//Matriz 3×3 - calcular soma da diagonal principal
#include <stdio.h>

int main(){
    int matriz[3][3];

    printf("\n=== Insira os valores da matriz ===\n");
    //entrada de valores
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){  
            printf("Digite o valor para [%d][%d]: ",i+1,j+1);
            scanf("%d", &matriz[i][j]);    
        }
    }

    int soma = 0;
    //somando a diag principal
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){  
            if(j==i){
                soma += matriz[i][j];
            }
        }
    }
    
    //exibindo
    printf("\nSoma da diagonal principal = %d\n", soma);

    return 0;
}

