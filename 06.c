#include <stdio.h>

int main (void){

    float qtd_hrs_trab, qtd_hrs_trab1, qtd_hrs_trab2, val_hrs_trab1, val_hrs_trab2;
    float val_hrs_trab, base_sal, sal_trab, sal_trab_extra;
    

    printf("Digite o valor da hora trabalhada: \n");
        scanf("%f",&val_hrs_trab);
    printf("Digite o numeros de horas trabalhadas na semana: \n");
        scanf("%f",&qtd_hrs_trab);

   
     base_sal = qtd_hrs_trab * val_hrs_trab;
     qtd_hrs_trab1 = qtd_hrs_trab - 40;

        if (qtd_hrs_trab <= 40) {

        printf("Funcionario sem acrescimo de adicional: %.2f \n\n", base_sal);
        }
        
        else
            if (qtd_hrs_trab < 60){

            qtd_hrs_trab1 = qtd_hrs_trab - 40;
            val_hrs_trab1 = val_hrs_trab * 1.5;
            sal_trab_extra = val_hrs_trab1 * qtd_hrs_trab1;
            base_sal = (qtd_hrs_trab - qtd_hrs_trab1) * val_hrs_trab;
            sal_trab = base_sal + sal_trab_extra;

            printf ("Funcionario trabalhou %.0f horas na semana.\n", qtd_hrs_trab);
            printf("Trabalhou %.0f horas extras no valor de %.2f\n", qtd_hrs_trab1, val_hrs_trab1);
            printf("Funcionario com acrescimo nas horas extras: %.2f \n\n", sal_trab); 
            
            }
            
            else 
                if (qtd_hrs_trab > 60){

                    qtd_hrs_trab2 = qtd_hrs_trab1 - 20; 
                    val_hrs_trab2 = val_hrs_trab * 2;
                    qtd_hrs_trab1 = qtd_hrs_trab - qtd_hrs_trab2 - 40;
                    val_hrs_trab1 = val_hrs_trab * 1.5;
                    sal_trab_extra = val_hrs_trab1 * qtd_hrs_trab1;
                    base_sal = (qtd_hrs_trab - qtd_hrs_trab1) * val_hrs_trab;
                    sal_trab = base_sal + sal_trab_extra;

                

            printf ("Funcionario trabalhou %.0f horas na semana.\n", qtd_hrs_trab);
            printf("Trabalhou %.0f horas extras no valor de %.2f\n", qtd_hrs_trab1, val_hrs_trab1);
            printf ("Trabalhou %.0f horas extras no valor de %.2f.\n", qtd_hrs_trab2, val_hrs_trab2);
            printf("Funcionario com acrescimo nas horas extras: %.2f \n\n", sal_trab);

                 }

                else{

                printf("**opcao invalida**\n\n");

                    }

    return (0);
}