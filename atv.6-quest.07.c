#include <stdio.h>

int main() {
 //Escreva um programa em linguagem C para calcular e exibir o valor de xy , sendo dados a base (x) e o expoente (y).
     double x;
    int y;
    double resultado = 1.0;  // Inicia com 1, pois qualquer número elevado a 0 é 1

    // Entrada de valores
    printf("Digite a base (x): ");
    scanf("%lf", &x);
    printf("Digite o expoente (y): ");
    scanf("%d", &y);

    // Calcula x^y
    if (y >= 0) {
        for (int i = 0; i < y; i++) {
            resultado *= x;
        }
    } else {
        for (int i = 0; i < -y; i++) {
            resultado *= x;
        }
        resultado = 1.0 / resultado;  // Inverte para expoentes negativos
    }
    
 // Exibe o resultado
    printf("%.2lf elevado a %d é igual a %.2lf\n", x, y, resultado);


    return 0;
}