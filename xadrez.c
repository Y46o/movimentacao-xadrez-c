#include <stdio.h>

int main() {

    // ================================
    // MOVIMENTO DA TORRE (for)
    // ================================

    int casasTorre = 5;
    int i;

    printf("Movimento da Torre:\n");

    for(i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }


    // ================================
    // MOVIMENTO DO BISPO (while)
    // ================================

    int casasBispo = 5;
    int contadorBispo = 1;

    printf("\nMovimento do Bispo:\n");

    while(contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }


    // ================================
    // MOVIMENTO DA RAINHA (do-while)
    // ================================

    int casasRainha = 8;
    int contadorRainha = 1;

    printf("\nMovimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while(contadorRainha <= casasRainha);


    // ================================
    // MOVIMENTO DO CAVALO (loops aninhados)
    // ================================

    int movimentoVertical = 2;     // Duas casas para baixo
    int movimentoHorizontal = 1;   // Uma casa para esquerda
    int contadorHorizontal = 1;

    printf("\nMovimento do Cavalo:\n");

    // Loop externo (for) - movimento vertical
    for(i = 1; i <= movimentoVertical; i++) {
        printf("Baixo\n");
    }

    // Loop interno (while) - movimento horizontal
    while(contadorHorizontal <= movimentoHorizontal) {
        printf("Esquerda\n");
        contadorHorizontal++;
    }

    return 0;
}
