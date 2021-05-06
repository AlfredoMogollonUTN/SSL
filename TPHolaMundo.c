#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int edad;
	char nombre[20];
	
	printf("Ingrese nombre: ");
	scanf("%s",nombre);

	printf("Ingrese edad: ");
	scanf("%d",&edad);
	
	printf("Hola %s, tu edad es %d.\n",nombre,edad);
	
	system("pause");
	return 0;
}
