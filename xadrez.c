#include <stdio.h>

/// Função recursiva para mover a Torre para a direita
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

/// Função recursiva para mover a Rainha para a esquerda
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

/// Função recursiva + loops aninhados para mover o Bispo na diagonal (cima + direita)
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;

    // Loops aninhados: externo simula "Cima", interno simula "Direita"
    for (int i = 0; i < 1; i++) { // sempre 1, apenas para demonstrar nesting
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }

    moverBispoRecursivo(casas - 1);
}

/// Função com loops aninhados e múltiplas condições para o movimento em "L" do Cavalo (2 para cima, 1 para direita)
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");

    int movimentos = 1; // número de movimentos em L
    for (int m = 0; m < movimentos; m++) {
        int vertical = 0;
        int horizontal = 0;

        // Loop externo: sobe 2 vezes
        for (int i = 0; i < 3; i++) {
            if (i == 2) break; // parar após 2 movimentos
            if (i == 1) {
                vertical++;
                printf("Cima\n");
                continue;
            }
            vertical++;
            printf("Cima\n");
        }

        // Loop interno: move 1 vez para a direita
        while (horizontal < 1) {
            printf("Direita\n");
            horizontal++;
        }
    }
}

int main() {
    // Movimento da TORRE - recursivo
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Movimento do BISPO - recursivo + aninhamento
    printf("\nMovimento do Bispo:\n");
    moverBispoRecursivo(5);

    // Movimento da RAINHA - recursivo
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Movimento do CAVALO - loops aninhados complexos
    moverCavalo();

    return 0;
}
