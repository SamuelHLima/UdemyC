#include <stdio.h>
#include <ctype.h>

int main(){
  
  char Sexo;
  float peso, altura;
 

  printf("informe sua altura ");
  scanf("%f", &altura);

   gets(stdin);

  printf("Informe seu sexo ");
  scanf("%c", &Sexo);

  if (Sexo == 'm'){
    peso = ((72.7* altura)-58);
    printf(" seu peso ideal é %f ", peso);
  }if (Sexo == 'f'){
    peso = ((62.1 * altura)-44.7);
  printf(" seu peso ideial é %f ", peso );
  }
  if (Sexo != 'm' && Sexo != 'f')
   printf(" sexo não reconhecido. \n");

}