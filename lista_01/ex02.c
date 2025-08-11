#include <stdio.h>

int main(){   
    //declarando
    float n1, n2;

    //entrada dos valores
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    //calculando
    printf ("%.2f + %.2f = %.2f\n", n1, n2, n1+n2);
    printf ("%.2f - %.2f = %.2f\n", n1, n2, n1-n2);
    printf ("%.2f * %.2f = %.2f\n", n1, n2, n1*n2);
    if (n2 == 0) {
        printf("Nao e possivel dividir por zero. \n");
    } else {
        printf("%.2f / %.2f = %.2f\n", n1, n2, n1 / n2);
    }

    return 0;
}