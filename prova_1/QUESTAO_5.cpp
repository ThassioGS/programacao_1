#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	
main(){
	setlocale(LC_ALL, "Portuguese");

	float num;
	
	//linhas 11 e 12 solicitam um número
	printf("Informe um número: ");
	scanf("%f", &num);
	
	//linhas 15 e 16 fazem as contas direto na impressão do resultado
	printf("Antecessor: %.0f\n", num-1);
	printf("Sucessor: %.0f", num+1);
}
