#include <stdio.h>


int main(void) {

    int num, soma, SAIR;
    soma = 0;
    SAIR = -1;

     do {
         printf("Digite um numero inteiro:\n ");
         scanf("%d", &num);
         soma = soma + num;

         while (num != SAIR){
       
        printf("Digite um numero inteiro (ou -1 para sair): ");
        scanf("%d",&num);
         soma = soma + num;
        }   
     }
 printf("A soma dos valores informados eh igual a %d\n", soma);
    
return(0);
};