#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i=0, numero[20], cont_m5=0, cont_div3=0;


    srand(time(NULL));

    printf("Sorteio de 20 números entre 0 e 10:\n\n");

    while(i < 20) {
        numero[i] = rand() % 11; 
        if(numero[i] > 5){
            cont_m5++;
        }else if(numero[i] % 3 == 0){
            cont_div3++;
        }
         i++;
    }
    
    printf("\nNúmeros sorteados maiores que 5:\n\n");
    i=0;
    while(i < 20) {
        printf("%d ", numero[i]);
    
    }


    return 0;
}
   return 0;
}