#include <stdio.h>

// Declaração das funções

//Soma
void sum(float a, float b, float *result);
//Subtração
void sub(float a, float b, float *result);
//Divisão
void div(float a, float b, float *result);
//Multiplicação
void mult(float a, float b, float *result);

//Menu
void menu();

//Verificar opção do usuario
int verifyOp();

//Receber os dois números dos usuarios
void numbers(float *a, float *b);

//Exibir o resultado
void show(float result);

int main() {
    float x, y, result;
    int op;

    do {
        menu();
        op = verifyOp();

        //Se o usuário desejar terminar
        if (op == 0) {
            printf("\nSaindo\n");
            break;
        }

        numbers(&x, &y);

        switch(op) {
            case 1:
                sum(x, y, &result);
                break;
            case 2:
                sub(x, y, &result);
                break;
            case 3:
                mult(x, y, &result);
                break;
            case 4:
                div(x, y, &result);
                break;
        }

        show(result);

    } while(op != 0);

    return 0;
}

// Funções

// Soma
void sum(float a, float b, float *result) {
    *result = a + b;
}

// Subtração
void sub(float a, float b, float *result) {
    *result = a - b;
}

// Multiplicação
void mult(float a, float b, float *result) {
    *result = a * b;
}

// Divisão
void div(float a, float b, float *result) {
    if (b != 0) {
        *result = a / b;
    } else {
        printf("\nErro: divisao por zero\n");
        *result = 0; // evitando divisão por zero
    }
}

//Menu 
void menu() {
    printf("\n=== Calculadora ===\n");
    printf("1. Somar\n");
    printf("2. Subtrair\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("0. Sair\n");
}

//Verificar op do usuario
int verifyOp() {
    int op;

    printf("\nOpçao: ");
    scanf("%d", &op);

    while(op < 0 || op > 4) {
        printf("\nOpçao invalida, digite novamente: ");
        scanf("%d", &op);
    }

    return op;
}

// Receber os dois números do usuário
void numbers(float *a, float *b) {
    printf("\nDigite o primeiro numero: ");
    scanf("%f", a);
    printf("Digite o segundo numero: ");
    scanf("%f", b);
}

// Exibir o resultado
void show(float result) {
    printf("\nResultado = %.2f\n", result);
}