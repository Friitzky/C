#include <stdio.h>

// Função para mostrar todas as idades
void mostrarTodasIdades(int idades[], int tamanho) {
    printf("Todas as idades: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", idades[i]);
    }
    printf("\n");
}

// Função para calcular a média das idades
float calcularMediaIdades(int idades[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += idades[i];
    }
    return (float)soma / tamanho;
}

// Função para mostrar as idades de índice ímpar
void mostrarIdadesIndiceImpar(int idades[], int tamanho) {
    printf("Idades de índice ímpar: ");
    for (int i = 1; i < tamanho; i += 2) {
        printf("%d ", idades[i]);
    }
    printf("\n");
}

int main() {
    // Definir o tamanho do vetor
    int tamanho = 12;

    // Declarar o vetor para armazenar as idades
    int idades[12];

    // Preencher o vetor com as idades lidas do usuário
    printf("Digite as idades de 12 pessoas:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);
    }

    // Chamar as funções solicitadas
    mostrarTodasIdades(idades, tamanho);
    printf("Média das idades: %.2f\n", calcularMediaIdades(idades, tamanho));
    mostrarIdadesIndiceImpar(idades, tamanho);

    return 0;
}
