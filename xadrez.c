#include <stdio.h>

/* =========================================
   FUNÇÃO RECURSIVA - TORRE
   ========================================= */
void moverTorre(int casas) {
    if (casas == 0) {
        return; // Caso base: para a recursão
    }

    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

/* =========================================
   FUNÇÃO RECURSIVA - RAINHA
   ========================================= */
void moverRainha(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

/* =========================================
   FUNÇÃO RECURSIVA + LOOPS ANINHADOS - BISPO
   ========================================= */
void moverBispo(int casas) {

    if (casas == 0) {
        return; // Caso base
    }

    // Loop externo - movimento vertical
    for (int vertical = 1; vertical <= 1; vertical++) {

        // Loop interno - movimento horizontal
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1); // chamada recursiva
}

int main() {

    int casasTorre = 5;
    int casasRainha = 8;
    int casasBispo = 5;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Rainha:\n");
    moverRainha(casasRainha);

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\nMovimento do Cavalo:\n");

    /* =========================================
       CAVALO - LOOPS COMPLEXOS
       Movimento em L:
       2 casas para Cima
       1 casa para Direita
       ========================================= */

    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    // Loop externo controla o eixo vertical
    for (int v = 1, h = 0; v <= movimentosVerticais; v++) {

        printf("Cima\n");

        // Quando terminar o movimento vertical,
        // executa o horizontal
        if (v == movimentosVerticais) {

            // Loop interno com condição múltipla
            while (h < movimentosHorizontais && v == movimentosVerticais) {
                printf("Direita\n");
                h++;

                // Controle explícito do fluxo
                if (h == movimentosHorizontais) {
                    break;
                }
            }
        }
    }

    return 0;
}
