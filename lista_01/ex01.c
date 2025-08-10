#include <stdio.h>

int main(){
    char nome[100], curso [100];
    int idade, ano_nascimento;
    
    printf("===== PROGRAMA DE APRESENTACAO ===== \n");

    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu curso: ");
    scanf(" %99[^\n]", curso); // lê string com espaço

    //CÁLCULO IDADE
    ano_nascimento = 2025 - idade;
 
    printf("\n==== Bem-vindo(a) ====\n");  
    printf("Ola, %s\n", nome);  
    printf("Voce tem %d anos e estuda %s\n", idade, curso);
    printf("Voce nasceu aproximadamente em: %d \n", ano_nascimento);


    return 0;
}