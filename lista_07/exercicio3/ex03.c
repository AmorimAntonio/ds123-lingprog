#include <stdio.h>

// variaveis globais
int totalVendas = 0;
float valorTotalVendido = 0;

// prototipos
float calcularDesconto(float valorCompra);
float aplicarDesconto(float valor, float percentual);
float calcularValorFinal(float valor);
void exibirResumo(float valorOriginal, float percentualDesconto, float valorDesconto, float valorFinal);

float calcularDesconto(float valorCompra) {
    float percentual;
    if (valorCompra < 100.00)
        percentual = 0.0;
    else if (valorCompra < 500.00)
        percentual = 0.05;
    else if (valorCompra < 1000.00)
        percentual = 0.10;
    else
        percentual = 0.15;
    return percentual;
}

float aplicarDesconto(float valor, float percentual) {
    return valor - (valor * percentual);
}

float calcularValorFinal(float valor) {
    float percentual = calcularDesconto(valor);
    float valorFinal = aplicarDesconto(valor, percentual);

    totalVendas++;
    valorTotalVendido += valorFinal;

    exibirResumo(valor, percentual, valor * percentual, valorFinal);
    return valorFinal;
}

void exibirResumo(float valorOriginal, float percentualDesconto, float valorDesconto, float valorFinal) {
    printf("\n=== RESUMO DA COMPRA ===\n");
    printf("Valor original: R$ %.2f\n", valorOriginal);
    printf("Desconto: %.2f%%\n", percentualDesconto * 100);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor final: R$ %.2f\n", valorFinal);
}

int main() {
    float valor;
    int continuar;

    do {
        printf("\nDigite o valor da compra: R$ ");
        scanf("%f", &valor);

        calcularValorFinal(valor);

        printf("\nDigite 1 para registrar outra compra ou qualquer outro valor para sair: ");
        scanf("%d", &continuar);

    } while (continuar == 1);

    printf("\n=== RELATORIO FINAL ===\n");
    printf("Total de vendas: %d\n", totalVendas);
    printf("Valor total vendido: R$ %.2f\n", valorTotalVendido);

    return 0;
}
