/*

#include <stdio.h>

void incrementarPorValor(int x){
    x = x+1; // altera a apenas a copia 
}

void incrementarPorRef(int *x){
    *x = *x + 1; // altera a var original
}

Qual a dif entre passar por valor e por ref? 
 - Por valor: A função recebe uma copia do valor da var e dentro da função as mod acontecem apenas na cópia.
Isso significa que a var original fica fora da função não é mod.

 - Por referencia: a função recebe o end da memoria da variavel e manipula diretamente a variavel original
 sendo que as alterações feitas dentro da função afetam a variavel original.


Qnd devemos  usar cada tipo?
 - Por valor: quando não temos a pretenção de alterar a var original, podendo, por ex, ser usada em sit que envolvam 
 cálculos ou comparações. Ex pratico: uso em func matematicas que retornam resultados sem mexer nos dados de entrada

 - Por referência: usada quando precisa alterar a variavel original, tendo a vantagem por exemplo de economizar memoria 
 e tempo, uma vez que não faz copias de dados grandes. Ex pratico: modificação de um vetor, atualização de contador ou na
 alteração de estados de objeto.


 =================CODIGO 1==============================
 

//verificação com retorno booleano

int ehPar(int numero){
    if(numero % 2 == 0 ) return 1;
    return 0;
}

//retorno condicional inline

int absoluto(int numero){
    return (numero < 0) ? -numero : numero;
}

int main(){
    printf("Maior: %d\n", maiorNumero(10, 25, 15));

    int num = 8;
    if (ehPar(num)) printf("%d e par\n", num);

    else printf("%d é ímpar\n", num);

    printf("Absoluto de -7: %d\n", absoluto(-7));

    return 0;

}
*/


//multiplos retornos
#include <stdio.h>

