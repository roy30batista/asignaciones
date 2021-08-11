#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define guardar 1

typedef struct contacto {
   char nombre[100];
   char numero[16];
   char correo[100];
} contacto;


int main (){

	contacto *persona;
	persona = (contacto*) malloc(10 * sizeof(contacto));
    printf("\n %d",persona);
	 int opcion = 0;
	 int posicion, x;

    while (opcion != 5) {
        printf("\n	-------MENU-------");
        printf("\n 	1. Añadir Nuevo Contacto");
        printf("\n 	2. Lista de Contactos");
        printf("\n 	3. Editar Contacto");
        printf("\n 	4. Eliminar Contacto");
        printf("\n 	5. Salir");
        printf("\n 	--> Opcion : ");
        scanf("%d", &opcion);

        if (opcion == 1) {
        }

        else if (opcion == 2) {
        } 

        else if (opcion == 3) {
        } 

        else if (opcion == 4) {
        }

        else if (opcion == 5) {
        	printf("Hasta luego!\n");
        }

        else {
            printf("ERROR::Opcion no valida");
        }
	    
        system("clear");
    } 

    	free(persona);
	printf("\n");
	return 0;
}
