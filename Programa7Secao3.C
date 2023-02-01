#include <stdio.h>

int main(){

    float total,altura;
    

    printf(" digite sua altura ");
    scanf("%f", &altura);

    
    total = (72.7*altura)-58;

    printf("seu peso ideial é de %.2f", total);
}