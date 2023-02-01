#include <stdio.h>

int main(){
    
    float valorhora, total;
    int hora;

    printf("Quando voce recebe por hora?");
    scanf("%f",&valorhora);

    printf("Quantas horas voce trabalha por mes?");
    scanf("%d",&hora);

    total = valorhora*hora;

    printf("O seu salario mensal é de %.2f", total);


}