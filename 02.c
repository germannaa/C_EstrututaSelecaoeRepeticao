#include <stdio.h>


int main(void) {

    int num, soma = 0;
    const int SAIR = -1;

     printf("Digite um numero inteiro (ou -1 para sair): ");
     scanf("%d",&num);

         while (num != SAIR){
         soma = soma + num;
       
          printf("Digite um numero inteiro (ou -1 para sair): ");
         scanf("%d",&num);
        }   

 printf("A soma dos valores informados eh igual a %d\n", soma);

return(0);
};
