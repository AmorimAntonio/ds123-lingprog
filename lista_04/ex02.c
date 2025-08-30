// crie uma função que 
#include <stdio.h>

void calcular_retangulo(float largura, float altura, float *area, float *perimetro){
    
    *area = (largura * altura); //calculo da area
    *perimetro = 2 * (largura + altura); // calculo do perimetro

}

int main(){
    //declarando variaveis
    float l = 5.0, h = 3.0;
    float area, perimetro;

    //usando a funcao
    calcular_retangulo(l,h,&area,&perimetro);

    //exibindo informacoes
    printf("Retangulo %.1f x %.1f\n", l, h);
    printf("Area = %.2f\n", area);
    printf("Perimetro = %.2f\n", perimetro);

    return 0; 
}