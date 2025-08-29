// crie uma função que 
#include <stdio.h>

void calcular_retangulo(float largura, float altura, float *area, float *perimetro){
    
    *area = (largura * altura);
    *perimetro = ((largura * 2)+(altura * 2));

}

int main(){
    float l = 5.0, h = 3.0;
    float area, perimetro;

    calcular_retangulo(l,h,&area,&perimetro);

    printf("Area = %.1f x %.1f = %.1f\n", l, h, area);
    printf("Perimetro = %.1f + %.1f = %.1f\n", l, h, perimetro);

    return 0; 
}