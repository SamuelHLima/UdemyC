#include <stdio.h>

int main(){

    int valor,p=0,i=0;

    printf("Digite um numero ");
    scanf("%d", &valor);

   

    if (valor % 2 ==0){
        p = valor;
        printf("O numero %d é par", p);
    }else{
        i = valor;
        printf("O numero %d é impar", i);
    }
}