#include <stdio.h>

int main() {
    float saldo = 0.0;
    int opcao;
    float valor;

    while (1) {
        printf("\nCaixa Eletrônico\n");
        printf("1. Verificar Saldo\n");
        printf("2. Depositar\n");
        printf("3. Sacar\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Seu saldo é: R$ %.2f\n", saldo);
        } else if (opcao == 2) {
            printf("Digite o valor a ser depositado: R$ ");
            scanf("%f", &valor);
            if (valor > 0) {
                saldo += valor;
                printf("Depósito realizado com sucesso.\n");
            } else {
                printf("Valor de depósito inválido.\n");
            }
        } else if (opcao == 3) {
            printf("Digite o valor a ser sacado: R$ ");
            scanf("%f", &valor);
            if (valor > 0 && valor <= saldo) {
                saldo -= valor;
                printf("Saque realizado com sucesso.\n");
            } else {
                printf("Valor de saque inválido ou saldo insuficiente.\n");
            }
        } else if (opcao == 4) {
            printf("Saindo...\n");
            break;
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}
