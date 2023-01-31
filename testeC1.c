#include <stdio.h>
//Std = Standard(padrão)
// io = input/output(entrada/Saida)

int main(){

	int num1, num2, soma, multiplicacao;

	printf("informe o primeiro número: ");
	scanf("%d", &num1);

	printf("informe o segundo número: ");
	scanf("%d", &num2);

    soma = num1 + num2;
	multiplicacao = soma * num1;

	printf("O resultado da multiplicação é %d ", multiplicacao);

}
