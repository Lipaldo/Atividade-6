#include <stdio.h>

int main() {

//Escreva um programa em linguagem C para calcular a área de um triângulo, sendo dados a sua base e a sua altura. Fórmula: Area = (Base * Altura)/2 

float b;
float a;
float area;

// pedindo pro usuário inserir o valor da base
printf("Insira o valor da Base(b):\n");
scanf("%f", &b);

// pedindo pro usuário inserir o valor da altura
printf("Insira o valor da altura(a):\n");
scanf("%f", &a);

// calculando o valor da área
 area = (b * a) / 2;

// exibindo o resultado
 printf("O valor da Área do Triângulo é %.2f",area);
    return 0;
}