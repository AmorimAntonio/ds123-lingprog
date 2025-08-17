#include <stdio.h>

int main(){
    int pont, pontinic;
    pontinic = 0;

    //validando a pont inicial
    while (pontinic <= 0) { 
        printf("Digite a pontuacao inicial: ");
        scanf("%d", &pontinic);

        if (pontinic <= 0) {
            printf("Valor invalido, a pontuacao deve ser positiva.\n");
        }
    }

    pont = pontinic;

    //Ganhou uma fase: +50 pontos
    pont += 50;
    printf("Ganhou uma fase (+50), pontuacao: %d\n", pont);

    //Coletou item especial: *2 (multiplicador)
    pont *= 2;
    printf("Coletou item especial (*2), pontuacao: %d\n", pont);

    //Perdeu uma vida: -30 pontos
    pont -= 30;
    printf("Perdeu uma vida (-30), pontuacao: %d\n", pont);

    //Bonus de tempo: +15 pontos
    pont += 15;
    printf("Bonus de tempo (+15), pontuacao: %d\n", pont);

    //Penalidade por dificuldade: /3 (divisao inteira)
    pont /= 3;
    printf("Penalidade por dificuldade (/3), pontuacao: %d\n", pont);

    //Bonus final: +100 pontos
    pont += 100;
    printf("Bonus final (+100), pontuacao: %d\n", pont);

    printf("Pontuacao final: %d\n", pont);
    
    //diferenca
    printf("A diferenca entre a pontuacao final e a incial foi de: %d pontos\n", pont - pontinic);

    return 0;
}
