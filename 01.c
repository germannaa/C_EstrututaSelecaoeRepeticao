#include <stdio.h>


int main(void) {

int numero1, numero2, soma, subtracao, multiplicacao, divisao, operacao;

printf ("Digite primeiro numero: \n");
scanf ("%d", &numero1);

printf ("Digite segundo numero: \n");
scanf ("%d", &numero2);

printf ("Escolha a operacao: \n");
printf ("Soma tecle 1 \n");
printf ("Subtracao tecle 2 \n");
printf ("Multiplicacao tecle 3 \n");
printf ("Divisao tecle 4 \n");
scanf ("%d", &operacao);

soma = numero1 + numero2;
subtracao = numero1 - numero2;
multiplicacao = numero1 * numero2;
divisao = numero1 / numero2;

switch ( operacao ) {
case 1 :
printf ("Sua soma eh %d \n", soma );
break;

case 2 : 
printf ("Sua subtracao eh %d \n", subtracao );
break;

case 3 :
printf ("Sua multiplicacao eh %d \n", multiplicacao);
break;

case 4: 
printf ("Sua divisao eh %d \n", divisao);
break;

default:
printf ("Escolha invalida! \n");
}

return(0);
};
