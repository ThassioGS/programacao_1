#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	
main(){
	setlocale(LC_ALL, "Portuguese");
	
	int sex;
	float saldo;
	
	//linhas 12, 13, 15 e 16 solicitam o saldo e sexo do usuário	
	printf("Informe o saldo da aplicação: ");
	scanf("%f", &saldo);
	
	printf("Informe seu sexo(1 = Masculino / 0 = Feminino): ");
	scanf("%d", &sex);
	
	//se for masculino desconta 10%, feminino 7%
	if(sex == 1){
		printf("Novo saldo R$ %.2f\n", saldo * 0.9);
	}
	else if(sex == 0){
		printf("Novo saldo R$ %.2f\n", saldo * 0.93);
	}
}
