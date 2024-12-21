#include <stdio.h>

int main() {
   //Escreva programa em linguagem C para calcular e exibir a média ponderada de 2 notas dadas. (nota1 = peso 6 e nota2 = peso 4).

float nota1;
float nota2;
float mediaPonderada;

// Pedir para o usuário inserir a primeira nota
printf("Insira a primeira nota:\n");
scanf("%f", &nota1);

// Pedir para o usuário inserir a segunda nota
printf("Insira a segunda nota:\n");
scanf("%f", &nota2);
    
// calcular a média ponderada
mediaPonderada = ((nota1 * 6) + (nota2 * 4)) / 10;

// exibir media ponderada
printf("A média Ponderada deste aluno(a) é %.2f", mediaPonderada);
    return 0;
}