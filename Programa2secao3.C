#include <stdio.h>

int main() {
 
  int min, max ;
  float est;

  printf(" digite a menor quantidade: ");
  scanf("%d", &min);

  printf("digite a maior quantidade: ");
  scanf("%d", &max);

 est = (min + max)/2 ;

printf (" O estoque medio é de %f", est);
}

