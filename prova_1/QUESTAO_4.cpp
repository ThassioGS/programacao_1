#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	
main(){
	setlocale(LC_ALL, "Portuguese");

	float num1, num2;
	
	//linhas 11, 12, 13 e 14 solicitam os números ao usuário
	printf("Informe o primeiro número: ");
	scanf("%f", &num1);
	
	printf("Informe o segundo número: ");
	scanf("%f", &num2);
	
	//se o numero for maio ou igual faz linha 19, senão linha 22
	if(num1 >= num2){
		printf("MAIOR MENOS MENOR = %.2f", num1 - num2);
	}
	else{
		printf("MAIOR MENOS MENOR = %.2f", num2 - num1);
	}
}
