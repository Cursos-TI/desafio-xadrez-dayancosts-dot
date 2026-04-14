#include <stdio.h>

int main() {

    // ===============================
    // Movimento do Cavalo (nível aventureiro)
    // ===============================

    // Definindo quantas casas o cavalo irá se mover
    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    // Contador para o loop while
    int contador = 0;

    // Linha em branco para separar dos movimentos anteriores
    printf("\n");

    // Loop externo (FOR) -> movimento vertical (para baixo)
    // O cavalo anda 2 casas para baixo
    for (int i = 0; i < movimentosBaixo; i++) {
        printf("Baixo\n");
    }

    // Loop interno (WHILE) -> movimento horizontal (para a esquerda)
    // O cavalo anda 1 casa para a esquerda
    while (contador < movimentosEsquerda) {
        printf("Esquerda\n");
        contador++;
    }

    return 0;
}