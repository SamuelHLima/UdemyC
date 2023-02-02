#include <stdio.h>

int main(){

    int numero,a,b;

    printf("digite um numero ");
    scanf("%d",&numero);

    if (numero > 0){
        a=numero;
        printf("o numero %d é positivo ", a);
        }else{
            b=numero;
            printf(" o numero %d é negativo", b);
        }
}