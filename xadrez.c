#include <stdio.h>

int main() {

    // ================================
    // MOVIMENTO DA TORRE (for)
    // ================================
    
    int casasTorre = 5;   // Número de casas que a Torre irá mover
    int i;

    printf("Movimento da Torre:\n");

    // Estrutura for: executa um número determinado de vezes
    for(i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }


    // ================================
    // MOVIMENTO DO BISPO (while)
    // ================================
    
    int casasBispo = 5;   // Número de casas que o Bispo irá mover
    int contadorBispo = 1;

    printf("\nMovimento do Bispo:\n");

    // Estrutura while: executa enquanto a condição for verdadeira
    while(contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }


    // ================================
    // MOVIMENTO DA RAINHA (do-while)
    // ================================
    
    int casasRainha = 8;  // Número de casas que a Rainha irá mover
    int contadorRainha = 1;

    printf("\nMovimento da Rainha:\n");

    // Estrutura do-while: executa pelo menos uma vez
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while(contadorRainha <= casasRainha);


    return 0;  // Indica que o programa terminou corretamente
}
