//Manipulação de strings em C

#include <stdio.h>
#include <string.h>

int main (){
    char nome[50];
    char sobrenome[50];
    char nomeCompleto [100];

    // Lendo strings
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin); // Lê uma linha do teclado para nome
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite seu sobrenome: ");
    fgets(sobrenome, sizeof(sobrenome), stdin); // Lê uma linha do teclado para nome
    sobrenome[strcspn(sobrenome, "\n")] = '\0'; // \0 indica o fim da string em C

    // Concatenando strings
    strcpy(nomeCompleto, nome); // Copia o conteudo de nome
    strcat(nomeCompleto, " "); // Acrescenta um espaço no final
    strcat(nomeCompleto, sobrenome); // Acrescenta sobrenome
    
    printf("\nNome completo: %s\n", nomeCompleto);
    printf("Tamano do nome completo: %lu caracteres\n", strlen(nomeCompleto));

    // Comparando strings
    if(strcmp(nome, sobrenome) == 0){
        printf("NOme e sobrenome sao iguais!\n");
    }
    else{
        printf("Nome e sobrenome sao diferentes.\n");
    }

    //contando vogais
    int vogais = 0; 
    for(int i = 0; nomeCompleto[i] != '\0'; i++)
    {
        char c = nomeCompleto[i];
        if (c == 'a' || c == 'e'|| c == 'o'|| c == 'u' || c == 'A'|| c == 'E'|| c == 'I'|| c == 'O'|| c == 'U')
        {
            vogais++;
        }
            
    }

    printf("Numero de vogais do nome completo: %d", vogais);

    return 0;
}