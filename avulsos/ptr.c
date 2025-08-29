// Declaração de ponteiros

#include <stdio.h>

int main(){
    float salario = 2500.50; // variavel "normal"
    float *ptr;        // declaração de ponteiro para int
    
    ptr = &salario;  // ptr recebe o endereço de número

    printf("Salario = %.2f\n", *ptr);
    
    
    printf("Digite o novo salario: ");
    scanf("%f", &*ptr);

    printf("Salario novo = %.2f\n", *ptr);



    return 0;
    
}
