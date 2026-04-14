#include <stdio.h>

int main() {

    // ============================
    // TORRE - usando FOR
    // Move 5 casas para a direita
    // ============================
    int casasTorre = 5;

    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // ============================
    // BISPO - usando WHILE
    // Move 5 casas na diagonal (cima + direita)
    // ============================
    int casasBispo = 5;
    int contadorBispo = 0;

    printf("\nMovimento do Bispo:\n");
    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // ============================
    // RAINHA - usando DO-WHILE
    // Move 8 casas para a esquerda
    // ============================
    int casasRainha = 8;
    int contadorRainha = 0;

    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    // ============================
    // CAVALO - usando LOOPS ANINHADOS
    // Movimento em "L":
    // 2 casas para baixo + 1 casa para a esquerda
    // ============================

    int movimentoVertical = 2;   // duas casas para baixo
    int movimentoHorizontal = 1; // uma casa para a esquerda

    printf("\nMovimento do Cavalo:\n");

    // Loop externo (FOR) - movimento vertical
    for (int i = 0; i < movimentoVertical; i++) {

        int controle = 0;

        // Loop interno (WHILE) - executa impressão do movimento vertical
        while (controle < 1) {
            printf("Baixo\n");
            controle++;
        }
    }

    // Após mover para baixo, move para a esquerda
    int j = 0;
    while (j < movimentoHorizontal) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}