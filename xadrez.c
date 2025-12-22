#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int casasBispo = 5;
    int casasTorre = 5;
    int casasRainha = 8;

    int casasBaixoCavalo = 2;
    int casasEsquerdaCavalo = 1;

    int i, j;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Movimento: 5 casas na diagonal (Cima + Direita) (WHILE)
    printf("Movimento do BISPO:\n");

    i = 1;
    while (i <= casasBispo) {
        printf("cima direita\n");
        i++;
    }
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Movimento: 5 casas para a direita (FOR)
    printf("Movimento da TORRE:\n");

    for(i = 1; i <= casasTorre; i++) {
        printf("direita\n");
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Movimento: 8 casas para a esquerda (DO-WHILE)
    printf("Movimento da RAINHA:\n");

    i = 1;
    do {
        printf("esquerda\n");
        i++;
    } while (i <= casasRainha);



    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("\nMovimento do CAVALO:\n");

    // Movimento em "L": 2 casas para baixo e 1 para a esquerda
    for (i = 1; i <= casasBaixoCavalo; i++) {
    printf("Baixo\n");

    // Só executa o movimento lateral quando terminar de descer
    if (i == casasBaixoCavalo) {
        int j = 1;
        while (j <= casasEsquerdaCavalo) {
            printf("Esquerda\n");
            j++;
        }
    }
}

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
