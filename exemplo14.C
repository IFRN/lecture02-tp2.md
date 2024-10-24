#include <stdio.h>

int main() {
    int opcao_origem, opcao_destino;
    float valor, convertido;
    float taxa_usd_brl = 5.25, taxa_usd_eur = 0.85; // Exemplos de taxas de câmbio
    float taxa_brl_usd = 0.19, taxa_brl_eur = 0.16;
    float taxa_eur_usd = 1.18, taxa_eur_brl = 6.19;

    while (1) {
        printf("\nConversor de Moedas\n");
        printf("1. USD (Dólar Americano)\n");
        printf("2. EUR (Euro)\n");
        printf("3. BRL (Real Brasileiro)\n");
        printf("4. Sair\n");
        printf("Escolha a moeda de origem: ");
        scanf("%d", &opcao_origem);

        if (opcao_origem == 4) {
            printf("Saindo...\n");
            break;
        }

        printf("Escolha a moeda de destino: ");
        scanf("%d", &opcao_destino);

        if (opcao_origem == opcao_destino) {
            printf("As moedas de origem e destino devem ser diferentes.\n");
            continue;
        }

        printf("Digite o valor a ser convertido: ");
        scanf("%f", &valor);

        if (valor < 0) {
            printf("Valor inválido.\n");
            continue;
        }

        switch (opcao_origem) {
            case 1:
                switch (opcao_destino) {
                    case 2: // USD para EUR
                        convertido = valor * taxa_usd_eur;
                        printf("USD %.2f = EUR %.2f\n", valor, convertido);
                        break;
                    case 3: // USD para BRL
                        convertido = valor * taxa_usd_brl;
                        printf("USD %.2f = BRL %.2f\n", valor, convertido);
                        break;
                }
                break;
            case 2:
                switch (opcao_destino) {
                    case 1: // EUR para USD
                        convertido = valor * taxa_eur_usd;
                        printf("EUR %.2f = USD %.2f\n", valor, convertido);
                        break;
                    case 3: // EUR para BRL
                        convertido = valor * taxa_eur_brl;
                        printf("EUR %.2f = BRL %.2f\n", valor, convertido);
                        break;
                }
                break;
            case 3:
                switch (opcao_destino) {
                    case 1: // BRL para USD
                        convertido = valor * taxa_brl_usd;
                        printf("BRL %.2f = USD %.2f\n", valor, convertido);
                        break;
                    case 2: // BRL para EUR
                        convertido = valor * taxa_brl_eur;
                        printf("BRL %.2f = EUR %.2f\n", valor, convertido);
                        break;
                }
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
    }

    return 0;
}
