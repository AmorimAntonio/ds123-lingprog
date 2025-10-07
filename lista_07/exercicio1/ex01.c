#include <stdio.h>

// Prototipos:
float celsiusParaFahrenheit(float celsius); // Formula: F = C × 9/5 + 32
float fahrenheitParaCelsius(float fahrenheit); // Formula: C = (F - 32) × 5/9
float celsiusParaKelvin(float celsius); // Formula: K = C + 273.15
float kelvinParaCelsius(float kelvin); // Formula: C = K - 273.15
float fahrenheitParaKelvin(float fahrenheit); // converte primeiro para Celsius, depois para Kelvin
float kelvinParaFahrenheit(float kelvin); // primeiro para Celsius, depois para Fahrenheit
void menu();
int verifyOp(int ops); 

int main() {

    //declarando as variaveis
    float resultado, valor; 
    int op;

    do {
        menu(); //exibindo menu
        op = verifyOp(6); //verificando a opção
        switch (op) {
            case 1: //C para F
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &valor);
                resultado = celsiusParaFahrenheit(valor);
                printf("Resultado: %.2f F\n", resultado);
                break;

            case 2: //F para C
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%f", &valor);
                resultado = fahrenheitParaCelsius(valor);
                printf("Resultado: %.2f C\n", resultado);
                break;

            case 3: //C para K
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &valor);
                resultado = celsiusParaKelvin(valor);
                printf("Resultado: %.2f K\n", resultado);
                break;

            case 4: //K para C
                printf("Digite a temperatura em Kelvin: ");
                scanf("%f", &valor);
                resultado = kelvinParaCelsius(valor);
                printf("Resultado: %.2f C\n", resultado);
                break;

            case 5: //F para K
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%f", &valor);
                resultado = fahrenheitParaKelvin(valor);
                printf("Resultado: %.2f K\n", resultado);
                break;

            case 6: //K para F
                printf("Digite a temperatura em Kelvin: ");
                scanf("%f", &valor);
                resultado = kelvinParaFahrenheit(valor);
                printf("Resultado: %.2f F\n", resultado);
                break;

            case 0:
                printf("Encerrando.\n");
                break;
        }
    } while (op != 0);
    
    return 0;
}

// Implementacoes
float celsiusParaFahrenheit(float celsius) {
    float F = celsius * 9.0 / 5.0 + 32.0;
    return F;
}

float fahrenheitParaCelsius(float fahrenheit) {
    float C = (fahrenheit - 32.0) * 5.0 / 9.0;
    return C;
}

float celsiusParaKelvin(float celsius) {
    float K = celsius + 273.15;
    return K;
}

float kelvinParaCelsius(float kelvin) {
    float C = kelvin - 273.15;
    return C;
}

float fahrenheitParaKelvin(float fahrenheit) {
    float C = fahrenheitParaCelsius(fahrenheit); // primeiro para Celsius
    float K = celsiusParaKelvin(C);              // depois para Kelvin
    return K;
}

float kelvinParaFahrenheit(float kelvin) {
    float C = kelvinParaCelsius(kelvin);         // primeiro para Celsius
    float F = celsiusParaFahrenheit(C);          // depois para Fahrenheit
    return F;
}

// Interface
void menu() {
    printf("\n=== CONVERTER TEMPERATURAS ===\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    printf("3. Celsius para Kelvin\n");
    printf("4. Kelvin para Celsius\n");
    printf("5. Fahrenheit para Kelvin\n");
    printf("6. Kelvin para Fahrenheit\n");
    printf("0. Sair\n");
}

int verifyOp(int ops) {
    int op;

    printf("Opcao: ");
    scanf("%d", &op);

    while (op < 0 || op > ops) {
        printf("Opcao invalida, digite novamente: ");
        scanf("%d", &op);
    }

    return op;
}

