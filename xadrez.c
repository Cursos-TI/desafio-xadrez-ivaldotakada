#include <stdio.h>

// DESAFIO XADREZ NÍVEL: MESTRE.
// Implementando movimentos complexos com recursividade e loops avançados.

// --- Funções Recursivas para Movimentos ---

// Função recursiva para o movimento da Torre
// A Torre se move 5 casas para a direita.
void moverTorre(int casas) {
    // Caso base: a recursão para quando não há mais casas para mover.
    if (casas <= 0) {
        return;
    }
    // Passo recursivo: imprime o movimento e chama a si mesma para a próxima casa.
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento da Rainha
// A Rainha se move 8 casas para a esquerda.
void moverRainha(int casas) {
    // Caso base
    if (casas <= 0) {
        return;
    }
    // Passo recursivo
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o movimento do Bispo, usando loops aninhados
// O Bispo se move 5 casas na diagonal (cima e direita).
void moverBispo(int casas) {
    // Caso base
    if (casas <= 0) {
        return;
    }

    // Loops aninhados para simular o movimento diagonal (1 casa para cima e 1 para a direita)
    // Loop externo para o movimento vertical (Cima)
    for (int i = 0; i < 1; i++) {
        printf("Cima\n"); // (Na verdade, deveria ser "Cima, Direita" ou "Diagonal")

        // Loop interno para o movimento horizontal (Direita)
        int j = 0;
        while (j < 1) {
            printf("Direita\n");
            j++;
        }
    }

    // Passo recursivo para mover para a próxima casa diagonal
    moverBispo(casas - 1);
}

int main() {

    // --- MOVIMENTO DA TORRE (RECURSIVO) ---
    printf("--- Movimento da Torre (5 casas para a direita, recursivo) ---\n");
    moverTorre(5);

    // --- MOVIMENTO DA RAINHA (RECURSIVO) ---
    printf("\n--- Movimento da Rainha (8 casas para a esquerda, recursivo) ---\n");
    moverRainha(8);

    // --- MOVIMENTO DO BISPO (RECURSIVO COM LOOPS ANINHADOS) ---
    printf("\n--- Movimento do Bispo (5 casas na diagonal, recursivo e com loops aninhados) ---\n");
    moverBispo(5);

    // --- MOVIMENTO DO CAVALO (LOOPS ANINHADOS COM MÚLTIPLAS CONDIÇÕES) ---
    // O Cavalo se move em "L": 2 casas para cima e 1 para a direita.
    
    printf("\n--- Movimento do Cavalo (2 casas para cima e 1 para a direita) ---\n");

    // Variáveis para controlar os movimentos
    int movimento_vertical = 2;
    int movimento_horizontal = 1;

    // Loop externo para a parte vertical do movimento "L"
    // O '3' representa o número total de passos (2 verticais + 1 horizontal)
    for (int i = 0; i < 3; i++) {
        // Condição para o movimento vertical (Cima)
        if (i < movimento_vertical) {
            printf("Cima\n");
        } else {
            // Se já fizemos os movimentos verticais, saímos do loop
            break;
        }

        // Loop aninhado para a parte horizontal do movimento "L"
        // Este loop é executado apenas na última iteração do movimento vertical (i == 1)
        if (i == movimento_vertical - 1) {
            while (movimento_horizontal > 0) {
                printf("Direita\n");
                movimento_horizontal--;
                // O 'break' garante que o movimento 'Direita' ocorra apenas uma vez.
                break; 
            }
        }
    }

    return 0;
}