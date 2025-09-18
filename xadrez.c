#include <stdio.h>
//DESAFIO XADREZ NIVEL: NOVATO.
//utilizando uma estrutura de repetição diferente (for, while ou do-while) para simulaçao dos movimentos.


int main() {

    // --- MOVIMENTO DA TORRE: usando a estrutura for ---
    // A Torre move-se 5 casas para a direita
    
    // Variavel para controlar o numero de casas percorridas
    int casas_torre = 5; 
    
    printf("--- Movimento da Torre (5 casas para a direita) ---\n");
    
    // O loop 'for' executa um numero fixo de vezes
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }

    // --- MOVIMENTO DO BISPO: usando a estrutura while ---
    // O Bispo move-se 5 casas na diagonal (cima e direita)
    
    // Variavel para controlar o numero de casas percorridas
    int casas_bispo = 5;
    
    printf("\n--- Movimento do Bispo (5 casas na diagonal) ---\n");
    
    // O loop 'while' continua enquanto a condicao for verdadeira
    while (casas_bispo > 0) {
        printf("Cima, Direita\n");
        casas_bispo--; // Decrementa a variavel a cada iteracao
    }

    // --- MOVIMENTO DA RAINHA: usando a estrutura do-while ---
    // A Rainha move-se 8 casas para a esquerda
    
    // Variavel para controlar o numero de casas percorridas
    int casas_rainha = 8;
    
    printf("\n--- Movimento da Rainha (8 casas para a esquerda) ---\n");
    
    // O loop 'do-while' garante que o codigo seja executado pelo menos uma vez
    do {
        printf("Esquerda\n");
        casas_rainha--; // Decrementa a variavel a cada iteracao
    } while (casas_rainha > 0);
    
    return 0;
}