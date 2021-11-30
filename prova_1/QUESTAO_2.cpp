#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	
main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	//linhas 11 e 12 solicitam o número
	printf("Informe um número: ");
	scanf("%d", &num);
	
	//função 'for' vai repetir 100 vezes, linha 17 checa se for par > imprimir, linha 19 adiciona um na contagem
	for(int i = 0; i < 100; i++){
		if(num % 2 == 0){
			printf("número: %d\n", num);
		}
		num++;
	}
}
