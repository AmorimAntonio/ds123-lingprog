#include <stdio.h>

int main(){   
    //declarando
    float n1, n2, n3, n4, media;

    //entrada dos valores
    printf("Nota 1: ");
    scanf("%f", &n1);

    printf("Nota 2: ");
    scanf("%f", &n2);

    printf("Nota 3: ");
    scanf("%f", &n3);

    printf("Nota 4: ");
    scanf("%f", &n4);


    //calculando
    media = (n1+n2+n3+n4)/4;
    printf("A media das notas foi: %.2f", media);

    if (media>=7.0){
        printf(", o aluno foi aprovado. \n");
    }

    else {
        printf(", o aluno foi reprovado. \n");
    }


    return 0;
}