#include <stdio.h>
#include <math.h>

// Define a taxa SELIC (anual)
#define SELIC 0.1375 

int main() {
    double valor_emprestimo, taxa_mensal, valor_parcela, valor_total;
    int parcelas;

    // Solicita o valor do empréstimo e o número de parcelas
    printf("Digite o valor do empréstimo: ");
    scanf("%lf", &valor_emprestimo);
    printf("Digite o número de parcelas: ");
    scanf("%d", &parcelas);

    // Calcula a taxa de juros mensal
    taxa_mensal = pow((1 + SELIC), (1.0/12)) - 1;

    // Calcula o valor de cada parcela usando a fórmula do financiamento
    valor_parcela = valor_emprestimo * (taxa_mensal * pow(1 + taxa_mensal, parcelas)) / (pow(1 + taxa_mensal, parcelas) - 1);

    // Calcula o valor total a ser pago
    valor_total = valor_parcela * parcelas;

    // Exibe o valor de cada parcela e o valor total a ser pago
    printf("Valor de cada parcela: R$%.2lf\n", valor_parcela);
    printf("Valor total a ser pago: R$%.2lf\n", valor_total);

    return 0;
}
