#include <stdio.h>

int main(){

    // variaveis
    int bispo = 1;
    int rainha = 1;
    int Torre = 1;
    int cavalo = 1;

    // Torre: movimento em linha reta
    // Simular 5 casas para a direita
    // Estrutura: While

printf("Movimento da Torre:\n");

    while (Torre <= 5 )
    {
        printf("Direita!\n");
        Torre++;
    }

    // Bispo: movimento em diagonal
    // Simular 5 casas para cima e à direita
    // Estrutura: Do while

printf("Movimento do Bispo:\n");
    do
    {
        printf("Cima, Direita\n");
        bispo ++;
    } while (bispo <= 5);

    // Rainha: movimento em todas as direções
    // Simular 8 casas para a esquerda
    // Estrutura: for while

printf("Movimento da Rainha:\n");
    for (int rainha = 0; rainha < 8; rainha++)
    {
       printf("Esquerda\n");
    }

    // Cavalo: movimento em L
    // Simular 2 casas para baixo e um para Esquerda
    // Estrutura: for e while

printf("\nMovimento do Cavalo:\n");

while (cavalo > 0) {
    // Duas casas para baixo
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }
    // Uma casa para a esquerda
    printf("Esquerda\n");

    cavalo--; // reduz contador de movimentos do Cavalo
    


    return 0;
}
}
