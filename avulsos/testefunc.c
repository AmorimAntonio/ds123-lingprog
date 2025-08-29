#include <stdio.h>

int main(){
    int numeros[5] = {10,20,30,40,50};
    int *ponteiro = numeros; // ponteiro aponta para o primeiro elemento

    for (int i = 0; i < 5; i++)
    {
        printf("numeros[%d] = %d\n", i + 1, numeros[i]);
    }
 
    printf("\nUsando ponteiro:\n");
    
    
    for (int i = 0; i < 5; i++)
    {
        printf("*(ponteiro + %d) = %d\n", i, *(ponteiro + i));
    }
 

    return 0; 

}