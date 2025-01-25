#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    const int quantidadeDeCasasBispo = 5;
    const int quantidadeDeCasasTorre = 5;
    const int quantidadeDeCasasRainha = 8;

    int opcao;
    do{
        printf("\n");
        printf("Escolha uma opção\n");
        printf("1 - [Bispo]  5 casas direita, cima\n");
        printf("2 - [Torre]  5 casas para a direita\n");
        printf("3 - [Rainha] 8 casas para a esquerda\n");
        printf("4 - Sair\n");
        scanf("%d",&opcao);

        switch (opcao)
        {
        case 1:
            printf("[Bispo]\n");
            for (int i = 0; i < quantidadeDeCasasBispo; i++) {
                for (int j = quantidadeDeCasasBispo; j > i; j--)
                {
                    printf(" ");
                }
                
                printf("Direita,cima\n");
            }
            break;
        case 2:
            printf("[Torre]\n");
            for (int i = 0; i < quantidadeDeCasasTorre; i++){
                printf("Direita\n");
            }
            
            break;
        case 3:
            printf("[Rainha]\n");
            for(int i = 0; i < quantidadeDeCasasRainha; i++){   
                printf("Esquerda\n");
            }
            
            break;
        case 4:
            printf("Saindo!\n");
            break;            
        default:
            printf("Opcao invalida. tente novamente.\n");
            break;
        }

    }while(opcao != 4);



    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
