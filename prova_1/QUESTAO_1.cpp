#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	
main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	//linhas 11 e 12 solicitam o número
	printf("Informe um numero: ");
	scanf("%d", &num);
	
	//linha 15 calcula se é par ou impar
	if(num % 2 == 0){
		printf("Número é par\n");
		
		//linha 19 calcula se é multiplo de quatro
		if(num % 4 == 0){
			printf("É multiplo de quatro\n");
		}
		else{
			printf("Não é multiplo e quatro\n");
		}
	}
	else{
		printf("Número é impar\n");
		
		//linha 30 calcula se é multiplo de três
		if(num % 3 == 0){
			printf("É multiplo de três\n");
		}
		else{
			printf("Não é multiplo e três\n");
		}
	}
}
