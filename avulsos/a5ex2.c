/*
    Ex 2: Sistema de controle de vendas
    Vetores e matrizes
    Uma loja precisa controlar as vendas de 5 produtos durante uma semana
    (7 dias). Você deve criar um sistema que armazene essas informações e gere
    relatórios.

*/

#include <stdio.h>
#define PRODUTO 5
#define DIAS 7


int main(){
    //matriz para armazenar vendas: [produto][dia]
    int vendas[PRODUTO][DIAS];
    char produtos[PRODUTO][20]={
        "Produto A", "Produto B", "Produto C",
        "Produto D", "Produto E"
    };
    char dias[DIAS][15]={
        "Segunda", "Terca", "Quarta", "Quinta",
        "Sexta", "Sabado", "Domingo"
    };

    printf("=== Sistema de controle de vendas ===\n\n");

    //entrada de dados - Loops aninhados

    printf("Digite as vendas para cada produto em cada dia: \n");

    for (int i = 0; i < PRODUTO; i++){
        printf("\n--- %s ---\n", produtos[i]);
            for (int j = 0; j < DIAS; j++){ 
                printf("%s: ", dias[j]);
                scanf("%d", &vendas[i][j]);


                if(vendas[i][j] < 0){
                    printf("Vendas nao podem ser negativas, digite novamente.\n");
                    j--; //volta para repetir aquela entrada
                }


            }
            
        }

    printf("\n=== Relatorio de vendas ===\n");
    //exibindo matriz completa e tals
    printf("\nTabela completa de vendas:\n");
    printf("%-12s", "Produto");
    for (int j = 0; j < DIAS; j++) {
        printf("%-8s", dias[j]);
    }234

    printf("Total\n");
    printf("----------------------------------------------------------------------------\n");

    // calculo e exibicao por produto
    for (int i = 0; i < PRODUTO; i++)
    {
        printf("%-12s", produtos[i]);
        int total_produto = 0;
        
        for (int j = 0; j < DIAS; j++)
        {
            printf("%-8d", vendas[i][j]);
            total_produto += vendas[i][j]; //acumula vendas do produto
        }
        
        printf("%d\n", total_produto);

    }

    //calcular total por dia
    printf("\n--- Vendas por dia ---\n");
    for (int j = 0; j < DIAS; j++)
    {
        int total_dia=0;
        for (int i = 0; i < PRODUTO; i++)
        {
            total_dia += vendas[i][j];
        }
        printf("%s: %d vendas\n", dias[j], total_dia);


    }
    
    

    return 0;
}