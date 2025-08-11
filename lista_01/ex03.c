#include <stdio.h>

int main(){
    //declarando
    int op = 0;
    float val, temp, dist, massa;
    
    //lendo a opção
    while (op < 1 || op > 3) {
        printf("===== Escolha =====\n");        
        printf("1. Converter temperatura (C para F)\n2. Converter distancia (m para km)\n3. Converter peso (kg para lb)\n");
        scanf("%d", &op);
    }

    printf("Digite o valor a ser convertido\n");
    scanf("%f", &val);
    
    //op 1
    if (op==1) {
        temp = val*1.8+32;
        printf("%.2f C = %.2f F \n", val, temp);
    }

    //op 2
    else if (op==2) {
        dist = val/1000;
        printf("%.2f m = %.2f km \n", val, dist);
    }

    //op 3
    else {
        massa = val*2.205;
        printf("%.2f kg = %.2f lb, aproximadamente. \n", val, massa);
    }

    return 0;
}