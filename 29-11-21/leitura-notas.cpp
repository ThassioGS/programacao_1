#include <stdio.h>
#include <stdlib.h>

main(){
	
	FILE *arq;
	char nome[100];
	float nota1, nota2;
	int status;
	
	arq = fopen("notas.txt", "rt");
	
	if (arq == NULL){
		printf("Problemas na abertura do arquivo\n");
		exit(0);
	}
	
	fscanf(arq, "%s %f %f", &nome, &nota1, &nota2);
	
	printf("ALUNO: %s\nNOTA 1: %.1f\nNOTA 2: %.1f\nMEDIA FINAL: %.1f", nome, nota1, nota2, (nota1 + nota2) / 2);
	
	fclose(arq);
	
	status = remove("notas.txt");
	
	if(status == 0){
		printf("\n\nArquivo excluido.");
	}else{
		printf("\n\nFalha na exclusão.");
	}
	
}
