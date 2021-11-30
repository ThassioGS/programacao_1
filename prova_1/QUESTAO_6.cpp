#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	
main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num= 0;
	
	//linha 11 faz o loop com o enquanto, linha 12 imprime e linha 13 faz a adição
	while (num <= 100){
		printf("Número: %d\n", num);
		num += 2 ;
	}
}
