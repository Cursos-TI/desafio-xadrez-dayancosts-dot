#include <stdio.h>

// ============================
// FUNÇÕES RECURSIVAS
// ============================

// TORRE - recursiva (Direita)
void moverTorre(int casas) {
    if (casas == 0) return; // condição de parada

    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// RAINHA - recursiva (Esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// BISPO - recursiva + loops aninhados
void moverBispo(int casas) {
    if (casas == 0) return;

    // Loop externo (vertical)
    for (int i = 0; i < 1; i++) {
        // Loop interno (horizontal)
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
}

int main() {

    // ============================
    // TORRE
    // ============================
    int casasTorre = 5;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // ============================
    // BISPO
    // ============================
    int casasBispo = 5;

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    // ============================
    // RAINHA
    // ============================
    int casasRainha = 8;

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // ============================
    // CAVALO - loops complexos
    // Movimento em "L":
    // 2 casas para cima + 1 para direita
    // ============================

    printf("\nMovimento do Cavalo:\n");

    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    for (int i = 0; i < movimentosVerticais; i++) {

        // controle extra para demonstrar uso de continue/break
        for (int j = 0; j < 2; j++) {

            if (j == 1) {
                continue; // ignora segunda execução
            }

            printf("Cima\n");

            if (i == movimentosVerticais - 1) {
                break; // sai do loop interno na última repetição
            }
        }
    }

    int k = 0;
    while (k < movimentosHorizontais) {
        printf("Direita\n");
        k++;
    }

    return 0;
}