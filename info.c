#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 100
#define MAX_LINEAS 5

void leerMatriz(char matriz[MAX_LINEAS][MAX_CHAR], FILE *file);
void filtro(char matriz[MAX_LINEAS][MAX_CHAR], char letra);

void leerMatriz(char matriz[MAX_LINEAS][MAX_CHAR], FILE *file){

	int i = 0;
	size_t bytes;
	char *linea;
	size_t tam;

	do{
		bytes=getline(&linea,&tam,file);
		if(bytes!=-1){
			strncpy(matriz[i],linea,bytes-1);
			matriz[i][bytes-1]='\0';
			i++;
		}
	}while(bytes!=-1);

	free(linea);
	fclose(file);
}

void filtro(char matriz[MAX_LINEAS][MAX_CHAR], char letra){

	int i;
	for (i = 0; i < 5; ++i)
	{
		
		if (matriz[i][0] == letra);
		{
			printf("%s\n", matriz[i]);
		}
	}
}

int main(int argc, char const *argv[]){

	FILE *file;

	char matriz[MAX_LINEAS][MAX_CHAR];
	char letra;
	letra = *argv[2];

	file = fopen("info.txt", "r");

	if (file == NULL){
		printf("El archivo no se ha podido abrir\n");
		exit(-1);
	}else{

		leerMatriz(matriz, file);
		filtro(matriz, letra);
	}

	return 0;
}
