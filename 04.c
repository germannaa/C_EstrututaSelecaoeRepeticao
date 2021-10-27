#include <stdio.h>


int main(void){

 int num, cont, soma;
 const int SAIR = 0;
 num = 1;
 cont = 0; 
 soma = 0;
 float media = 0;
     
        while (num!=SAIR){
        printf("Digite um numero par: ");
        scanf("%d", &num);

        if (num%2==0){
        cont++;
        soma = soma + num;
        }
              }

    media = soma/(cont-1);

    printf ("Vc digitou %d vezes algum numero par.\n", cont-1);
   printf("A media dos numeros pares digitados eh igual a %f\n", media);
                
return(0);
};

