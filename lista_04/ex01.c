#include <stdio.h>

int main() {
    float salario = 2500.50;   // variável normal
    float *ponteiro_salario;  // declaração do ponteiro

    // fazendo o ponteiro apontar para o salario
    ponteiro_salario = &salario;

    // printando o salario inicial
    printf("Salario inicial = %.2f\n", *ponteiro_salario);

    // mod. salario atraves do ponteiro
    *ponteiro_salario = 3000.00;

    // printando novo valor
    printf("Salario modificado = %.2f\n", salario);

    return 0;
}
