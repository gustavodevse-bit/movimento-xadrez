#include <stdio.h>

// ---------- Funções Recursivas ----------

// Torre: anda em linha reta (para a direita)
void moverTorre(int casas) {
    if (casas == 0) return; // condição de parada
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// Bispo: movimento diagonal (recursivo + loops aninhados)
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima, Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Rainha: movimento em linha reta (para a esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ---------- Loops complexos para o Cavalo ----------
void moverCavalo(int movimentos) {
    for (int m = 0; m < movimentos; m++) {
        // Movimento em L: duas casas para cima, uma para a direita
        for (int i = 0; i < 2; i++) {
            printf("Cima\n");
            if (i == 1) continue; // apenas para mostrar uso de "continue"
        }
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
            if (j == 0) break; // apenas para demonstrar "break"
        }
    }
}

// ---------- Bispo com loops aninhados ----------
void moverBispoLoops(int casas) {
    for (int i = 0; i < casas; i++) {     // movimento vertical (cima)
        for (int j = 0; j < 1; j++) {     // movimento horizontal (direita)
            printf("Cima, Direita\n");
        }
    }
}

// ---------- Programa principal ----------
int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 1; // quantos movimentos em L o cavalo vai fazer

    // Torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Bispo (recursividade)
    printf("\nMovimento do Bispo (recursivo):\n");
    moverBispoRecursivo(casasBispo);

    // Bispo (loops aninhados)
    printf("\nMovimento do Bispo (loops aninhados):\n");
    moverBispoLoops(casasBispo);

    // Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Cavalo
    printf("\nMovimento do Cavalo:\n");
    moverCavalo(movimentosCavalo);

    return 0;
}
