#include <stdio.h>

int main() {
    int candidato1 = 0, candidato2 = 0, candidato3 = 0;
    int voto;

    while (1) {
        printf("\nSistema de Votação\n");
        printf("1. Votar no Candidato 1\n");
        printf("2. Votar no Candidato 2\n");
        printf("3. Votar no Candidato 3\n");
        printf("4. Exibir Resultado e Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &voto);

        if (voto == 1) {
            candidato1++;
            printf("Voto registrado para o Candidato 1\n");
        } else if (voto == 2) {
            candidato2++;
            printf("Voto registrado para o Candidato 2\n");
        } else if (voto == 3) {
            candidato3++;
            printf("Voto registrado para o Candidato 3\n");
        } else if (voto == 4) {
            printf("\nResultado da Votação:\n");
            printf("Candidato 1: %d votos\n", candidato1);
            printf("Candidato 2: %d votos\n", candidato2);
            printf("Candidato 3: %d votos\n", candidato3);
            break;
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}
