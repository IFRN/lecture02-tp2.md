#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dado1, dado2, soma;
    char resposta;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    do {
        // Lança os dados
        dado1 = (rand() % 6) + 1;
        dado2 = (rand() % 6) + 1;
        soma = dado1 + dado2;

        // Exibe o resultado do lançamento
        printf("Dado 1: %d\n", dado1);
        printf("Dado 2: %d\n", dado2);
        printf("Soma: %d\n", soma);

        // Verifica condições especiais
        if (soma == 7 || soma == 11) {
            printf("Você tirou %d! Parabéns!\n", soma);
        }

        // Pergunta ao usuário se deseja lançar novamente
        printf("Deseja lançar os dados novamente? (s/n): ");
        scanf(" %c", &resposta);

    } while (resposta == 's' || resposta == 'S');

    return 0;
}
