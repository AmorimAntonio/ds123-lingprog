#include <stdio.h>

//prototipos
float calcularIMC(float peso, float altura);
void exibirClassificacao(float imc);
int validarDados(float peso, float altura);
float calcularPesoIdeal(float altura);

int main(){
    //declaração de variaveis
    float altura, peso, imc, pesoIdeal;

    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite sua altura (em m): ");
    scanf("%f", &altura);

    // Valida os dados antes de calcular
    if (!validarDados(peso, altura)) {
        printf("Dados invalidos.\n");
        return 1; // encerra o programa
    }

    // Calcula IMC e peso ideal
    imc = calcularIMC(peso, altura);
    pesoIdeal = calcularPesoIdeal(altura);

    // Exibe resultados
    printf("\n=== RESULTADOS ===\n");
    printf("IMC: %.2f\n", imc);
    exibirClassificacao(imc);
    printf("Peso ideal aproximado: %.2f kg\n", pesoIdeal);

    return 0;
}

float calcularIMC(float peso, float altura){
    float imc = peso/(altura*altura); //calculando 
    return imc;
}

void exibirClassificacao(float imc) {
    //verificando e exibindo
    if (imc < 18.5) { 
        printf("Abaixo do peso\n");
    } else if (imc < 25.0) {
        printf("Peso normal\n");
    } else if (imc < 30.0) {
        printf("Sobrepeso\n");
    } else if (imc < 35.0) {
        printf("Obesidade Grau I\n");
    } else if (imc < 40.0) {
        printf("Obesidade Grau II\n");
    } else {
        printf("Obesidade Grau III\n");
    }
}

int validarDados(float peso, float altura){
    if (peso>0 && altura >0) return 1;
    else return 0;
}



float calcularPesoIdeal(float altura){
    float pesoIdeal = 22 * (altura * altura); // calculando o imc ideal fornecido no exercicio
    return pesoIdeal;
}