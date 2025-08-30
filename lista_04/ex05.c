#include <stdio.h>
#include <string.h>

// Função para inverter uma string usando ponteiros
void inverter_string(char *str) {
    char *inicio = str;  //atribuindo o ponteiro inicio ao primeiro caractere             
    char *fim = str + strlen(str) - 1; //atribuindo o ponteiro fim para o ultimo caractere
    //o -1 é porque o strlen retorna o numero de caracteres +1 (\0)
    char temp; //var auxiliar

    while (inicio < fim) {
      
        temp = *inicio; //guarda o caractere da esquerda
        *inicio = *fim; //atribui o caractere da direita ao "inicio"
        *fim = temp; //coloca o caractere da esquerda, previamente armazenado, no fim

        //percorrendo a string (direta e inversamente)
        inicio++;
        fim--;
    }
}

int main() {
    char texto[] = "PONTEIROS";

    printf("String original: %s\n", texto);
    inverter_string(texto);
    printf("String invertida: %s\n", texto);

    return 0;
}
