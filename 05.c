#include <stdio.h>

int main (void){

  int a, b, c;

  printf ("Digite os lados do triangulo \n");
  scanf ("%d %d %d", &a, &b, &c);

  if ((a<=b+c) && (b<=a+c) && (c<=a+b)) {
      printf ("eh um triangulo");
    
    if ((a==b) && (b==c)) {
        printf ("Equilatero\n");
    }
     else {
         if ((a==b) || (a==c) || (b==c)) {
          printf ("isoceles\n");
         }
         else  {
                 printf ("escaleno\n");
             }
    }
 }

    return (0);
}