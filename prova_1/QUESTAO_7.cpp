#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	
main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	//linhas 11 e 12 solicitam o n�mero
	printf("Informe um numero: ");
	scanf("%d", &num);
	
	//linhas 15, 22, 29 e 36 testam se � par, multiplo de 3, 5 e 10
	if(num % 2 == 0){
		printf("N�mero � par\n");
	}
	else{
		printf("N�mero � impar\n");
	}
	
	if(num % 3 == 0){
		printf("� multiplo de tr�s\n");
	}
	else{
		printf("N�o � multiplo de tr�s\n");
	}
	
	if(num % 5 == 0){
		printf("� multiplo de cinco\n");
	}
	else{
		printf("N�o � multiplo de cinco\n");
	}
	
	if(num % 10 == 0){
		printf("� multiplo de dez\n");
	}
	else{
		printf("N�o � multiplo de dez\n");
	}
}
