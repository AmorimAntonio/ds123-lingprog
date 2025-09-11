#include <stdio.h>

/*
Exercício 1: Calculadora de Desconto
Objetivo: Praticar operadores aritméticos e relacionais com vetores

Crie um programa que:

Leia 5 preços de produtos em um vetor
Calcule desconto de 10% para produtos acima de R$ 100,00
Calcule desconto de 5% para produtos entre R$ 50,00 e R$ 100,00
Produtos abaixo de R$ 50,00 não têm desconto
Exiba o preço original, desconto aplicado e preço final
*/


int main() {
    float prices [5]; //precos
    float disc [5]; //descontos

    //entrada de valores
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o preco do produto %d: ", i+1);
        scanf("%f", &prices[i]);
    }
    
    //calculando
    for (int i = 0; i < 5; i++)
    {
        if(prices[i]>100.00){ //verificando as opções
            disc[i] = 0.9;
        }
        else if(prices[i]>=50){
            disc[i] = 0.95;
        }
        else{
            disc[i] = 1;
        }
    }
    
    //exibindo
    printf("\n ==== Produtos e seus descontos: ==== \n");
    for (int i = 0; i < 5; i++)
    {
        printf(" ==== Produto %d: ====\n", i+1);
        printf(" Preco original: R$ %.2f, desconto aplicado: %.2f%% (R$ %.2f), preco final: R$ %.2f\n", 
            prices[i], (1-disc[i])*100, (1-disc[i])*prices[i],prices[i]*disc[i]);
    }
    
    return 0;
}
