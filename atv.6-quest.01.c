#include <stdio.h>

int main() {

//Escrever um programa em linguagem c que leia duas variáveis inteiras e troque o conteúdo entre elas. 
    
    int n1 = 50;
    int n2 = 60;
    int n3 = n1;

    //primeiro printe o valor de n1
    printf("O valor que está em n1 é: %d\n", n1);
   
    //passo 2: agora print o valor n2
    printf("O valor que está em n2 é: %d\n", n2);
    
   // Armazena o valor original de n1
    n1 = n2;     // n1 recebe o valor de n2
    n2 = n3;     // n2 recebe o valor original de n1

 printf("\n\n\n\n\nO valor que está em n1 é: %d\n", n1);
    
printf("O valor que está em n2 é: %d\n", n2);

    return 0;
}