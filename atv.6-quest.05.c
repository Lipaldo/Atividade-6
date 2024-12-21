#include <stdio.h>

int main() {
//Escreva um programa em linguagem C para ler uma temperatura dada na escala Fahrenheit e exibir o equivalente em Celsius. Fórmula: C=(5/9)*(F-32).

float Celsius;
float Fahrenheit;

// pedindo pro usuário digitar um valor 
printf("Insira um valor para a escala Fahrenheit:\n");
scanf("%f", &Fahrenheit);

// fazendo a conversão de Fahrenheit pra Celsius
Celsius = ( 5.0 / 9.0 ) * ( Fahrenheit - 32);

// exibindo resuldado
printf("A temperatura de %.2f Fahrenheit é %.2f° Celsius", Fahrenheit, Celsius);
    return 0;
}