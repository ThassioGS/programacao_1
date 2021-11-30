#include <stdio.h>

main(){
	
	FILE *arquivoNotas;
	char nome[100];
	float nota1, nota2;
	
	arquivoNotas = fopen("notas-sequencial.txt", "r");
	
	if (arquivoNotas == NULL){
		printf("Problemas na leitura do arquivo\n");
	}
	
	while(1){
		if(feof(arquivoNotas)){
			break;
		}
		fscanf(arquivoNotas, "%s %f %f", &nome, &nota1, &nota2);
		printf("%s %f %f\n", nome, nota1, nota2);
	}	
		
	fclose(arquivoNotas);
}
