#include <stdio.h>

int main() {

//Escreva um programa em linguagem C para calcular e exibir o comprimento de uma circunferência, sendo dada o valor de seu raio. Fórmula: C=2πR.
    float pi = (3.14);
float R;
float C;

printf("Digite um valor para o r(Raio):\n");
scanf("%f", &R);

// Calcular comprimento
C = 2 * (pi * R);

// exibir o resultado do cálculo
printf("O valor do Comprimento da circunferência é %.2f", C);

    return 0;
}