#include <stdio.h>

int main()
{
    /* code */
    float n1,n2,n3,n4,q1,q2,q3,q4;

    printf(" Digite o primeiro numero ");
    scanf("%f",&n1);
    printf(" Digite o segundo numero ");
    scanf("%f",&n2);
    printf(" Digite o terceiro numero ");
    scanf("%f",&n3);
    printf(" Digite o quarto numero ");
    scanf("%f",&n4);

    q1 = (n1 * n1);
    q2 = (n2 * n2);
    q3 = (n3 * n3);
    q4 = (n4 * n4);

    if (q3 >= 100){
        printf(" o quadrodo do terceiro numero é %.2f ", q3);
    }else{
        printf(" O quadrado do primeiro numero é %.2f \n",q1);
        printf(" O quadrado do segundo numero é %.2f \n",q2);
        printf(" O quadrado do terceiro numero é %.2f \n",q3);
        printf(" O quadrado do quarto numero é %.2f \n",q4);
    }




}
