#include <stdio.h>

//DESAFIO XADREZ NIVEL: NOVATO.
//utilizando uma estrutura de repetição diferente (for, while ou do-while) para simulaçao dos movimentos.

// Desafio de XADREZ - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    
    // CORREÇÃO: Implementando a sugestão de usar CONSTANTES
    // Usamos 'const' para garantir que esses valores não sejam alterados acidentalmente.
    // Por convenção, constantes são nomeadas em MAIÚSCULAS.
    const int CASAS_TORRE = 5;
    const int CASAS_BISPO = 5;
    const int CASAS_RAINHA = 8;


    // --- MOVIMENTO DA TORRE: usando a estrutura for ---
    // A Torre move-se 5 casas para a direita
    
    // Usamos a constante diretamente no 'printf' e na condição do loop
    printf("--- Movimento da Torre (%d casas para a direita) ---\n", CASAS_TORRE);
    
    // O loop 'for' executa um numero fixo de vezes (lendo a constante)
    for (int i = 0; i < CASAS_TORRE; i++) {
        printf("Direita\n");
    }

    // --- MOVIMENTO DO BISPO: usando a estrutura while ---
    // O Bispo move-se 5 casas na diagonal (cima e direita)
    
    // CORREÇÃO: Criamos um 'contador' separado para o loop,
    // pois a constante CASAS_BISPO não pode ser decrementada.
    int contador_bispo = CASAS_BISPO;
    
    printf("\n--- Movimento do Bispo (%d casas na diagonal) ---\n", CASAS_BISPO);
    
    // O loop 'while' continua enquanto a condicao for verdadeira
    while (contador_bispo > 0) {
        printf("Cima, Direita\n");
        contador_bispo--; // Decrementa o CONTADOR, não a constante
    }

    // --- MOVIMENTO DA RAINHA: usando a estrutura do-while ---
    // A Rainha move-se 8 casas para a esquerda
    
    // CORREÇÃO: Mesmo caso do 'while', usamos um contador separado.
    int contador_rainha = CASAS_RAINHA;
    
    printf("\n--- Movimento da Rainha (%d casas para a esquerda) ---\n", CASAS_RAINHA);
    
    // O loop 'do-while' garante que o codigo seja executado pelo menos uma vez
    do {
        printf("Esquerda\n");
        contador_rainha--; // Decrementa o CONTADOR
    } while (contador_rainha > 0);
    
    return 0;
}