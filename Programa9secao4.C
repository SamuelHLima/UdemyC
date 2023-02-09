#include <stdio.h>

int main()
{
    /* code */
    int numero;

    printf(" DIgite o numero ");
    scanf("%d",&numero);

    if (numero %2 ==0){
        printf("o numero %d é par\n", numero);
    }else{
        printf("o numero %d é impar\n", numero);
    }if ( numero > 0){
        printf(" o numero %d é maior que zero\n", numero);
    }else{
        printf(" o numero %d é menor que zero\n", numero);
    }
}
