#include <stdio.h>

int main(){

    float metros, centimetros;

    printf(" Digite tamanho em Metro ");
    scanf("%f",&metros);

    centimetros = metros * 100;

    printf(" O tamanho em centimetros é %f", centimetros);
}