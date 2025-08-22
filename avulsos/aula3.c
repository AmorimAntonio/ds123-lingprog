#include <stdio.h>

int main(){

    int notas[3];

    //entrada de dados
    printf("Digite 3 notas: \n");


    for (int i = 0; i < 3; i++){
        printf("Nota %d: ", i+1);
        scanf("%d", &notas[i]);
    }

    //Saída de dados
    printf("\n Notas digitadas: \n");
    for (int i = 0; i < 3; i++){
        printf("Nota %d: %d\n", i+1, notas[i]);
    }

    return 0;
}