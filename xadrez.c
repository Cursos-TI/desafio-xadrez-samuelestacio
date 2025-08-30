#include <stdio.h>

int main() {
    // Bispo: 5 casas na diagonal superior direita
    printf("Movimento do Bispo:\n");
    for (int i = 0; i < 5; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Torre: 5 casas para a direita
    printf("\nMovimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Rainha: 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    for (int i = 0; i < 8; i++) {
        printf("Esquerda\n");
    }

    return 0;
}
