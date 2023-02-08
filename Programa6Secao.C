#include <stdio.h>

int main(){

    int e = 0,m = 0,peso;

    printf(" Digite o peso do peixe ");
    scanf("%d", &peso);

    if ( peso > 50){
        e = peso - 50;
        m = e *4 ;
    
    }

    printf(" O peso do peixe é %d \n", peso);
    printf(" O excesso de peso é %d \n", e);
    printf(" O valor da multa é %d ", m);


}