#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float media(float num1, float num2){
	
	return ((num1 * 0.6) + (num2 * 0.4)) / 2;
}

float entradaDados(){
	setlocale(LC_ALL, "Portuguese");
	
	float num1, num2;

	printf("Informe o primeiro n�mero: ");
	scanf("%f", &num1);

	printf("Informe o segundo n�mero: ");
	scanf("%f", &num2);

	return media(num1, num2);
}

main(){
	printf("M�dia: %f", entradaDados());
}
