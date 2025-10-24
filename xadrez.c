#include <stdio.h>

// DESAFIO XADREZ NÍVEL: AVENTUREIRO.
// Acrescentando a simulação do movimento do Cavalo utilizando loops aninhados.

int main() {

    // --- MOVIMENTO DA TORRE: usando a estrutura for ---
    // A Torre move-se 5 casas para a direita

    // Variável para controlar o número de casas percorridas
    int casas_torre = 5; 

    printf("--- Movimento da Torre (5 casas para a direita) ---\n");

    // O loop 'for' executa um número fixo de vezes
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }

    // --- MOVIMENTO DO BISPO: usando a estrutura while ---
    // O Bispo move-se 5 casas na diagonal (cima e direita)

    // Variável para controlar o número de casas percorridas
    int casas_bispo = 5;

    printf("\n--- Movimento do Bispo (5 casas na diagonal) ---\n");

    // O loop 'while' continua enquanto a condição for verdadeira
    while (casas_bispo > 0) {
        printf("Cima, Direita\n");
        casas_bispo--; // Decrementa a variável a cada iteração
    }

    // --- MOVIMENTO DA RAINHA: usando a estrutura do-while ---
    // A Rainha move-se 8 casas para a esquerda

    // Variável para controlar o número de casas percorridas
    int casas_rainha = 8;

    printf("\n--- Movimento da Rainha (8 casas para a esquerda) ---\n");

    // O loop 'do-while' garante que o código seja executado pelo menos uma vez
    do {
        printf("Esquerda\n");
        casas_rainha--; // Decrementa a variável a cada iteração
    } while (casas_rainha > 0);

    // --- CORREÇÃO: MOVIMENTO DO CAVALO: usando loops aninhados ---
    // O Cavalo se move em "L": duas casas em uma direção e uma perpendicularmente.
    // Simulação: 2 casas para baixo e 1 casa para a esquerda.
    
    printf("\n--- Movimento do Cavalo (2 casas para baixo e 1 para a esquerda) ---\n");
    
    // Primeiro loop (externo) para o movimento vertical (2 casas para baixo)
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
        
        // Loop (interno) aninhado que só executa na última iteração do loop externo
        // (ou seja, após o segundo movimento "Baixo")
        if (i == 1) { 
            // Loop interno para o movimento horizontal (1 casa para a esquerda)
            for (int j = 0; j < 1; j++) {
                printf("Esquerda\n");
            }
        }
    }

    return 0;
}