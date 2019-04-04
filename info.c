#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 100
#define MAX_LINEAS 5

void leerMatriz();
void filtro();
void imprimirMatriz();

void leerMatriz(char matriz[MAX_LINEAS][MAX_CHAR], FILE *file){



}

int main(int argc, char const *argv[3])
{
	FILE *file;

	char matriz[MAX_LINEAS][MAX_CHAR];

	fopen(argv[1], "r");

	if (file == NULL)
	{
		printf("El archivo no se ha podido abrir\n");
		exit -1;
	}else{

		leerMatriz(matriz, file);

	}

	return 0;
}
