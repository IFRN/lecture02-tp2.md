#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_secreto, palpite;
    
    // Inicializa o gerador de números aleatórios com a hora atual
    srand(time(0));
    numero_secreto = rand() % 100 + 1; // Gera um número entre 1 e 100

    printf("Adivinhe o número entre 1 e 100!\n");

    while (1) {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        if (palpite < 1 || palpite > 100) {
            printf("Por favor, digite um número entre 1 e 100.\n");
        } else if (palpite > numero_secreto) {
            printf("Muito alto! Tente novamente.\n");
        } else if (palpite < numero_secreto) {
            printf("Muito baixo! Tente novamente.\n");
        } else {
            printf("Parabéns! Você adivinhou o número.\n");
            break;
        }
    }

    return 0;
}
