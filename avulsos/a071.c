/*
Exercicio pratico  
Crie um programa com funções para
-> Calcular area do circulo;
-> Calcular perímetro do retangulo;
-> Exibir um menu de informações
*/

#include <stdio.h>

//prototipos
double areacirc(double raio);
double perimetro(double l1, double l2);


double areacirc(double raio) {
    return (raio * raio) * 3.1415;
}

double perimetro(double l1, double l2) {
    return 2 * (l1 + l2);
}

void menu(){
    // Cálculo e impressão da área do círculo com raio 5
    printf("Area do circulo: %.2f\n", areacirc(5.0));

    // Cálculo e impressão do perímetro do retângulo com lados 5 e 6
    printf("Perimetro do retangulo: %.2f\n", perimetro(5.0, 6.0));
}


int main() {
    menu();
    return 0;
}