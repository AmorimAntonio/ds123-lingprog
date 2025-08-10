#include <stdio.h>

int main(){
    char nome[50];
    int idade;
    float salario;

    // Entrada de dados
    printf("Digite seu nome: ");
    scanf("%s", nome);   
    printf("Digite sua idade: ");
    scanf("%d", &idade);   
    printf("Digite seu salario: ");
    scanf("%f", &salario);
    
    // Saída de dados
    printf("\n=== DADOS INFORMADOS === \n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Salario: %.2f\n", salario);


    return 0;
}