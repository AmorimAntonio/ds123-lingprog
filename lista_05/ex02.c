/*
Exercício 2: Contador de Números
Objetivo: Praticar operadores lógicos e de comparação

Desenvolva um programa que:

Leia 10 números inteiros em um vetor
Conte quantos são pares E positivos
Conte quantos são ímpares OU negativos
Conte quantos são múltiplos de 3 E de 5 ao mesmo tempo
Use operadores lógicos (&&, ||, !) nas condições
*/

#include <stdio.h>

int main() {
    int num [10]; //numeros
    int cond [3] = {0,0,0}; //condições (na mesma ordem do enunciado)

    //entrada de valores
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &num[i]);
    }
    
    //verificando se atendem às condicoes
    for (int i = 0; i < 10; i++)
    {
        //condicao 1
        if (num[i]>0 && num[i]%2 == 0)
        {
            cond[0] += 1;
        }

        //condicao 2
        if (num[i]<0 || num[i]%2 != 0)
        {
            cond[1] += 1;
        }
        
        //condicao 3
        if (num[i]%3==0 && num[i]%5==0)
        {
            cond[2] += 1;
        }
    }
    
    //exibindo
    printf("Numeros pares e positivos = %d\n", cond[0]);
    printf("Numeros impares ou negativos = %d\n", cond[1]);
    printf("Numeros multiplos de 3 e 5 ao mesmo tempo = %d\n", cond[2]);

    return 0;
}
