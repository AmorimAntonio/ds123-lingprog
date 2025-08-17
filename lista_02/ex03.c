#include <stdio.h>


//FUNÇÕES DO CAIXA:

//Consultar saldo
void ver_saldo(double saldo) {
    printf("Saldo atual: R$ %.2f\n", saldo);
}

//Deposito
double deposito(double saldo) {
    double valor;
    printf("Valor do deposito: ");
    scanf("%lf", &valor);

    if (valor >= 0.01) {
        saldo += valor;
        printf("Deposito de R$ %.2f realizado com sucesso.\n", valor);
        printf("Saldo atualizado: R$ %.2f\n", saldo);
    } else {
        printf("Erro, valor minimo = R$ 0,01.\n");
    }
    return saldo;
}

//Saque
double saque(double saldo) {
    double valor;
    printf("Valor do saque: ");
    scanf("%lf", &valor);
    //verificações
    if (valor <= 0) {
        printf("Erro, o valor do saque deve ser positivo.\n");
    } else if (valor > 500.0) {
        printf("Erro: valor maximo do saque e R$ 500,00.\n");
    } else if (valor > saldo) {
        printf("Erro: saldo insuficiente.\n");
    //efetuando a operação
    } else {
        saldo -= valor;
        printf("Saque de R$ %.2f realizado com sucesso.\n", valor);
        printf("Saldo atualizado: R$ %.2f\n", saldo);
    }
    return saldo;
}

//Transferencia
double transf(double saldo) {
    double valor, taxa, total;
    printf("Valor da transferencia: ");
    scanf("%lf", &valor);

    if (valor <= 0) {
        printf("Falha: a transferencia deve ter valor positivo.\n");
        return saldo;
    }
    //calculando a taxa e assegurando o min de 2 reais por transf
    taxa = valor * 0.01;        
    if (taxa < 2.0) taxa = 2.0; 
    total = valor + taxa;
    //verificando se o tem saldo suficiente
    if (total > saldo) {
        printf("Falha: saldo insuficiente.\n");
        printf("Saldo atual: R$ %.2f\n", saldo);
    } else { //caso tenha, realiza a transf
        saldo -= total;
        printf("Transferencia realizada. (Taxa = %.2f)\n", taxa);
        printf("Saldo atualizado: R$ %.2f\n", saldo);
    }
    return saldo;
}

int main() {
    double saldo = 1000.00; // saldo inicial
    int op;

    while (1) {
        // Menu
        printf("\n====== MENU ======\n");
        printf("1. Consultar saldo atual\n");
        printf("2. Realizar deposito\n");
        printf("3. Realizar saque\n");
        printf("4. Transferencia entre contas\n");
        printf("5. Sair do sistema\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);

        if (op == 1) {
            ver_saldo(saldo);
        } else if (op == 2) {
            saldo = deposito(saldo);
        } else if (op == 3) {
            saldo = saque(saldo);
        } else if (op == 4) {
            saldo = transf(saldo);
        } else if (op == 5) {
            printf("Encerrando, saldo atualizado: R$ %.2f\n", saldo);
            break;
        } else {
            printf("Opcao invalida (escolha entre 1 e 5)\n");
        }
    }

    return 0;
}
