#include <stdio.h>

#define SIZE 10

// Declaracao das funcoes

// Preencher array 
void fillArray(int *arr, int size);

// Exibir array
void showArray(const int arr[], int size);

// Encontrar maior valor
int maxValue(const int arr[], int size);

// Encontrar menor valor 
int minValue(const int arr[], int size);

// Calcular media
float average(const int arr[], int size);

// Ordenar array crescente 
void sortArray(int *arr, int size);

int main() {
    int arr[SIZE];
    int max, min;
    float avg;

    // Preenche array
    fillArray(arr, SIZE);

    // Exibe array original
    printf("\nArray original: ");
    showArray(arr, SIZE);

    // Analises
    max = maxValue(arr, SIZE);
    min = minValue(arr, SIZE);
    avg = average(arr, SIZE);

    printf("\nMaior valor: %d", max);
    printf("\nMenor valor: %d", min);
    printf("\nMedia: %.2f\n", avg);

    // Ordena array
    sortArray(arr, SIZE);

    // Exibe array ordenado
    printf("\nArray ordenado: ");
    showArray(arr, SIZE);

    return 0;
}

// Funções

// Preencher array
void fillArray(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("Numero %d: ", i+1);
        scanf("%d", &arr[i]);
    }
}

// Exibir array
void showArray(const int arr[], int size) {
    printf("[");
    for(int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size-1) printf(", ");
    }
    printf("]\n");
}

// Maior valor
int maxValue(const int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) max = arr[i];
    }
    return max;
}

// Menor valor
int minValue(const int arr[], int size) {
    int min = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] < min) min = arr[i];
    }
    return min;
}

// Media
float average(const int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}

// Ordenar array
void sortArray(int *arr, int size) {
    int temp;

    //Algoritmo de ordenação "Bubble Sort"
    //Ele analisa cada elemento e - se encontrar um numero menor - troca de posição com esse numero
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
