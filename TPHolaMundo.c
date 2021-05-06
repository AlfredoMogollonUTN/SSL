#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
