#include <stdio.h>

main(){
	
	FILE *arq;
	
	arq = fopen("notas-sequencial.txt", "a");
	/*
	w=destroi arquivo ou cria novo
	a=vai abrir arquivo existente ou cria novo
	*/
	
	if (arq == NULL){
		printf("Problemas na criacao do arquivo\n");
	}
	
	char nome[100];
	float nota1, nota2;
	
	printf("Informe o nome: ");
	scanf("%s", &nome);
	
	printf("Informe a nota 1: ");
	scanf("%f", &nota1);
	
	printf("Informe a nota 2: ");
	scanf("%f", &nota2);
	
	fprintf(arq, "%s %.2f %f \n", nome, nota1, nota2);
	
	fclose(arq);
}
