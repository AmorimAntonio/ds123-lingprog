//Matriz 2×3 - contar quantos elementos são maiores que 5

#include <stdio.h>

int main(){
    int matriz[2][3];

    printf("\n=== Insira os valores da matriz ===\n");
    //entrada de valores
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){  
            printf("Digite o valor para [%d][%d]: ",i+1,j+1);
            scanf("%d", &matriz[i][j]);    
        }
    }

    int cont = 0;
    //contando maiores que 5
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){  
            if(matriz[i][j]>5){
                cont += 1;
            }
        }
    }
    
    //exibindo
    printf("\nContagem de numeros maiores que 5 = %d\n", cont);

    return 0;
}

