#include <stdio.h>

int main()
{
    float indice;

    printf("Informe o Índice de poluição ");
    scanf("%f",&indice);

    if (indice >= 0.3 && indice < 0.4){
      printf("Grupo 1 suspender atividades");  
    }if ( indice >= 0.4 && indice < 0.5){
        printf(" Grupo 1 e Grupo 2 suspender atividades ");
    }if (indice >= 0.5){
        printf(" Todos os grupos suspender as atividades ");
    }else{
        printf(" Niveis aceitaveis ");
    }

}
