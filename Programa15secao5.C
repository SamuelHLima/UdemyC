#include <stdio.h>

int main()
{
    int valor, maior= -999, menor = 999, soma =0;
    float media;

    for ( int i = 0; i < 10; i++);
    {
        printf("Informe um valor: ", i + 1);
        scanf(" %d", &valor);
        if (valor>0)
        {
            if(valor>maior){
                maior=valor;
            }
            if (valor<menor)
            {
                menor=valor;
            }
            soma=soma+valor;
        }


    }

media=soma/10;
printf("O maior Numero é %d\n ", maior);
printf(" O menor numero é %d\n", menor);
printf(" A media dos numeros é %2.f", media);

}
