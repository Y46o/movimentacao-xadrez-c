    // ================================
    // MOVIMENTO DO CAVALO (loops aninhados)
    // ================================

    int movimentoVertical = 2;   // Duas casas para baixo
    int movimentoHorizontal = 1; // Uma casa para esquerda
    int contadorHorizontal;

    printf("\nMovimento do Cavalo:\n");

    // Loop externo (for) - Movimento vertical
    for(int i = 1; i <= movimentoVertical; i++) {
        printf("Baixo\n");
    }

    // Loop interno (while) - Movimento horizontal
    contadorHorizontal = 1;

    while(contadorHorizontal <= movimentoHorizontal) {
        printf("Esquerda\n");
        contadorHorizontal++;
    }
