#include <stdio.h>

int main() {
    int n1, dobro;
 
 //Passo 1: pedir para o usuário inserir um número inteiro e positivo
 printf("Insira um número inteiro e positivo:\n");
 scanf("%d", &n1);
 
 // Passo 2: mensagem de erro se o número for negativo
 if ( n1 < 0){
     printf("Erro, esse número não é positivo");
 }

// calcular o dobro
 
 dobro = n1 * 2;

//exibir o dobro
 printf("O dobro de %d é %d", n1, dobro);

    return 0;
}