#include <stdio.h>

int main (){
    // Números inteiros
    int idade = 19;
    short ano = 2025;
    long populacao = 215000000L;

    // Número decimais
    float altura = 1.75f;
    double precisao = 3.14159265359;

    // Caracteres
    char nome [] = "Marcio";
    char letra = 'A';

    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Pi: %.10f\n", precisao);
    printf("Primeira letra: %c\n", letra);
    printf("Nome: %s\n", nome);

    return 0;
}