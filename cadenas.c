#include <stdio.h>	
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[3]){

	char* cadena;
	cadena = (char*)malloc(sizeof(char)*100);

	char* cadenaCat;
	cadenaCat = (char*)malloc(sizeof(char)*116);

	printf("Introduce una cadena:\n");
	fgets(cadena,100,stdin);

	strtok(cadena, "\n");

	printf("La longitud de la cadena \"%s\" es %ld\n",cadena,strlen(cadena));

	cadenaCat = strcat(cadena, "Cadena anyadida");
	printf("\n%s\n", 	cadenaCat);

	if (strstr(cadena, argv[1]) != NULL)
	{
		printf("\nLa cadena esta contenida en la introducida por teclado\n");
	}else{
		printf("\nLa cadena no esta contenida en la introducida por teclado\n");
	}

	int posicionLeida = atoi(argv[2]);

	printf("\nLa letra en la posicion %d de la cadena \"%s\" es %c\n",posicionLeida, cadena, cadena[posicionLeida-1] );

	free(cadena);
	free(cadenaCat);

	return 0;
}