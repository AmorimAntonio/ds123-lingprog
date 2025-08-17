#include <stdio.h>

int main() {
    double peso, alt, imc;
    int idade;
    char sexo;

    // lendo  o peso
    do {
        printf("Digite o peso em kg: ");
        scanf("%lf", &peso);
        if (peso <= 0) {
            printf("Erro: o peso deve ser maior que zero.\n");
        }
    } while (peso <= 0);

    // lendo a altura
    do {
        printf("Digite a altura em metros: ");
        scanf("%lf", &alt);
        if (alt <= 0) {
            printf("Erro: altura deve ser maior que zero.\n");
        }
    } while (alt <= 0);

    // lendo idade
    do {
        printf("Digite a idade em anos: ");
        scanf("%d", &idade);
        if (idade <= 0) {
            printf("Erro: idade deve ser maior que zero.\n");
        }
    } while (idade <= 0);

    // lendo sexo
    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    if (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {
        printf("Erro: use M ou F.\n");
        return 0;
    }

    // calculando imc
    imc = peso / (alt * alt);
    printf("\nIMC calculado: %.2f\n", imc);

    // classificacao
    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    } else if (imc < 25.0) {
        printf("Classificacao: Peso normal\n");
    } else if (imc < 30.0) {
        printf("Classificacao: Sobrepeso\n");
    } else if (imc < 35.0) {
        printf("Classificacao: Obesidade grau I\n");
    } else if (imc < 40.0) {
        printf("Classificacao: Obesidade grau II\n");
    } else {
        printf("Classificacao: Obesidade grau III\n");
    }

    // recomendações
    if ((imc >= 25.0) && (sexo == 'M' || sexo == 'm')) {
        printf("Recomendacao: praticar exercicios de forca.\n");
    }
    if ((imc >= 25.0) && (sexo == 'F' || sexo == 'f')) {
        printf("Recomendacao: praticar exercicios aerobicos.\n");
    }
    if (idade >= 60 && imc < 18.5) {
        printf("Recomendacao: consultar um geriatra.\n");
    }
    if (idade <= 25 && imc >= 30.0) {
        printf("Recomendacao: procurar um nutricionista.\n");
    }

    return 0;
}
