#include <stdio.h>


int main(void) {

    int x;  

    for (x = 1000; x <= 1999; x++) {  
        if(x%11 == 5)  {  

            printf (" --> %d / 11 tem como resto 5\n",x);  
        }  

    }  

return(0);
};
