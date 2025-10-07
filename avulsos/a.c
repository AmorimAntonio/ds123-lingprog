//Funções e passagem de parametro em C
#include <stdio.h>
#include <string.h>

int calcular_expressao(int a, int b, char operador){
    switch (operador)
    {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return (b!=0) ? a/b: 0;
        case '%': return (b!=0) ? a%b : 0;
        default: return 0;
    }
}

void incrementar_valor(int *valor){
    (*valor)++;

}

int main (){
    int x = 10, y = 3;
    printf("Operacoes: %d + %d = %d\n", x, y, calcular_expressao(x,y,'+'));
    
    printf("Antes do incremento: %d\n", x);
    incrementar_valor(&x);
    printf("Depois do incremento: %d\n", x);
    
    return 0;
}