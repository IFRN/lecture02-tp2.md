#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminante, raiz1, raiz2;

    // Solicita os coeficientes da equação
    printf("Digite os coeficientes a, b e c da equação ax² + bx + c = 0:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calcula o discriminante
    discriminante = b * b - 4 * a * c;

    // Verifica o número de raízes reais
    if (discriminante > 0) {
        // Duas raízes reais
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("A equação tem duas raízes reais: %.2lf e %.2lf\n", raiz1, raiz2);
    } else if (discriminante == 0) {
        // Uma raiz real
        raiz1 = -b / (2 * a);
        printf("A equação tem uma raiz real: %.2lf\n", raiz1);
    } else {
        // Nenhuma raiz real
        printf("A equação não tem raízes reais.\n");
    }

    return 0;
}
