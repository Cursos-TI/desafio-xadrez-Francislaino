#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// funções recursivas e loops aninhados

// TORRE – movimento horizontal (Direita)
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// RAINHA – movimento horizontal (Esquerda)
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// BISPO – recursivo + loops aninhados
// Loop externo: vertical | interno: horizontal
void moverBispo(int casas) {

    if (casas > 0) {

        // Loop externo vertical
        for (int v = 0; v < 1; v++) {

            // Loop interno horizontal
            for (int h = 0; h < 1; h++) {
                printf("Direita\n");
            }

            printf("Cima\n");
        }

        moverBispo(casas - 1);
    }
}




int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
 
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Movimento: 5 casas na diagonal (Cima + Direita) 
    printf("Movimento do BISPO:\n");
    moverBispo(5);

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Movimento: 5 casas para a direita 
    printf("\nMovimento da TORRE:\n");
    moverTorre(5);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Movimento: 8 casas para a esquerda 
    printf("\nMovimento da RAINHA:\n");
    moverRainha(8);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Movimento: 2 casas para cima e 1 casa para a direita
    printf("\nMovimento do CAVALO:\n");

    for (int v = 1; v <= 2; v++) {

        if (v > 2) break;

        printf("Cima\n");

        for (int h = 1; h <= 1; h++) {
            if (v != 2) continue;
            printf("Direita\n");
        }
    }


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
