#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	
main(){
	setlocale(LC_ALL, "Portuguese");

	float num1, num2;
	
	//linhas 11, 12, 13 e 14 solicitam os n�meros ao usu�rio
	printf("Informe o primeiro n�mero: ");
	scanf("%f", &num1);
	
	printf("Informe o segundo n�mero: ");
	scanf("%f", &num2);
	
	//se o numero for maio ou igual faz linha 19, sen�o linha 22
	if(num1 >= num2){
		printf("MAIOR MENOS MENOR = %.2f", num1 - num2);
	}
	else{
		printf("MAIOR MENOS MENOR = %.2f", num2 - num1);
	}
}
