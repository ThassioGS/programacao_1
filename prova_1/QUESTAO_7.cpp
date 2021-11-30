#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	
main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	//linhas 11 e 12 solicitam o número
	printf("Informe um numero: ");
	scanf("%d", &num);
	
	//linhas 15, 22, 29 e 36 testam se é par, multiplo de 3, 5 e 10
	if(num % 2 == 0){
		printf("Número é par\n");
	}
	else{
		printf("Número é impar\n");
	}
	
	if(num % 3 == 0){
		printf("É multiplo de três\n");
	}
	else{
		printf("Não é multiplo de três\n");
	}
	
	if(num % 5 == 0){
		printf("É multiplo de cinco\n");
	}
	else{
		printf("Não é multiplo de cinco\n");
	}
	
	if(num % 10 == 0){
		printf("É multiplo de dez\n");
	}
	else{
		printf("Não é multiplo de dez\n");
	}
}
