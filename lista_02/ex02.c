#include <stdio.h>

int main(){
    float n1, n2, n3, freq, media;

    // lendo e validando nota 1
    do {
        printf("Digite a nota 1 (entre 0 e 10): ");
        scanf("%f", &n1);
        if (n1 < 0 || n1 > 10) {
            printf("Invalido, a nota deve estar entre 0 e 10.\n");
        }
    } while (n1 < 0 || n1 > 10);

    // nota 2
    do {
        printf("Digite a nota 2 (entre 0 e 10): ");
        scanf("%f", &n2);
        if (n2 < 0 || n2 > 10) {
            printf("Invalido, a nota deve estar entre 0 e 10.\n");
        }
    } while (n2 < 0 || n2 > 10);

    // nota 3
    do {
        printf("Digite a nota 3 (entre 0 e 10): ");
        scanf("%f", &n3);
        if (n3 < 0 || n3 > 10) {
            printf("Invalido, a nota deve estar entre 0 e 10.\n");
        }
    } while (n3 < 0 || n3 > 10);

    // frequencia
    do {
        printf("Digite a frequencia (0 a 100): ");
        scanf("%f", &freq);
        if (freq < 0 || freq > 100) {
            printf("Invalido, frequencia deve estar entre 0 e 100.\n");
        }
    } while (freq < 0 || freq > 100);

    // calculando e exibindo a media
    media = (n1 + n2 + n3) / 3.0f;
    printf("\nMedia calculada: %.2f\n", media);

    // determinando o conceito
    if (media >= 9.0f) {
        printf("Conceito: A\n");
    } else {
        if (media >= 7.0f) {
            printf("Conceito: B\n");
        } else {
            if (media >= 5.0f) {
                printf("Conceito: C\n");
            } else {
                printf("Conceito: D\n");
            }
        }
    }

    // verificando o status de aprovacao
    if (media >= 5.0f && freq >= 75.0f) {
        printf("Resultado: Aprovado\n");
    } else if (media < 5.0f && freq < 75.0f) {
        printf("Resultado: Reprovado por nota e frequencia\n");
    } else if (media < 5.0f) {
        printf("Resultado: Reprovado por nota\n");
    } else if (freq < 75.0f) {
        printf("Resultado: Reprovado por frequencia\n");
    }

    return 0;
}
