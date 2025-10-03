#include <stdio.h>
#include <string.h>

#define MAX 100

// Declaracao das funcoes

// Ler string 
void readString(char *s, int max);

// Contar caracteres 
int countChars(const char *s);

// Inverter string
void invertString(char *s);

// Converter para maiuscula 
void toUpper(char *s);

// Converter para minuscula
void toLower(char *s);

// Contar palavras
int countWords(const char *s);

// Interface
void menu(void);
int verifyOp(void);

// Programa principal
int main() {
    char s[MAX + 1];
    int op;

    printf("Digite uma string (max 100): ");
    readString(s, MAX);

    do {
        menu();
        op = verifyOp();

        if (op == 0) {
            printf("\nSaindo\n");
            break;
        }

        switch (op) {
            case 1: {
                int n = countChars(s);
                printf("\nA string possui %d caracteres\n", n);
                break;
            }
            case 2: {
                invertString(s);
                printf("\nString invertida: \"%s\"\n", s);
                break;
            }
            case 3: {
                toUpper(s);
                printf("\nString em maiuscula: \"%s\"\n", s);
                break;
            }
            case 4: {
                toLower(s);
                printf("\nString em minuscula: \"%s\"\n", s);
                break;
            }
            case 5: {
                int w = countWords(s);
                printf("\nNumero de palavras: %d\n", w);
                break;
            }
        }

    } while (op != 0);

    return 0;
}

// Funções

// Ler string 
void readString(char *s, int max) {
    if (fgets(s, max + 1, stdin)) {
        size_t n = strlen(s);
        if (n > 0 && s[n - 1] == '\n') s[n - 1] = '\0';
    } else {
        s[0] = '\0';
    }
}

// Contar caracteres
int countChars(const char *s) {
    return (int)strlen(s);
}

// Inverter string 
void invertString(char *s) {
    int i = 0;
    int j = (int)strlen(s) - 1;
    while (i < j) {
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        i++;
        j--;
    }
}

// Converter para maiuscula 
void toUpper(char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - ('a' - 'A'); // subtrai 32
        }
    }
}

// Converter para minuscula
void toLower(char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + ('a' - 'A'); // soma 32
        }
    }
}

// Contar palavras
int countWords(const char *s) {
    int inWord = 0;
    int count = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        // espacos simples (pode expandir para tab se quiser)
        if (s[i] != ' ' && s[i] != '\t') {
            if (!inWord) {
                inWord = 1;
                count++;
            }
        } else {
            inWord = 0;
        }
    }
    return count;
}

// UI
void menu(void) {
    printf("\n=== MANIPULADOR DE STRINGS ===\n");
    printf("1. Contar caracteres\n");
    printf("2. Inverter string\n");
    printf("3. Converter maiuscula\n");
    printf("4. Converter minuscula\n");
    printf("5. Contar palavras\n");
    printf("0. Sair\n");
}

int verifyOp(void) {
    int op;
    printf("Opcao: ");
    if (scanf("%d", &op) != 1) {
        op = 0;
    }
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    while (op < 0 || op > 5) {
        printf("Opcao invalida, digite novamente: ");
        if (scanf("%d", &op) != 1) {
            op = 0;
        }
        while ((c = getchar()) != '\n' && c != EOF);
    }
    return op;
}
