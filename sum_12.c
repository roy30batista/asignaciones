/* asignacion 12: Elaborar una aplicación de línea de comandos en C que simule un gestor de contactos simple
 *  de un dispositivo móvil. Esta programa debe permitir agregar nuevos registros, listarlos, modificarlos,
 *  buscar contactos guardados, eliminar registros telefónicos. Tome en consideración que la información
 *  personal por almacenar debe ser nombre, teléfono y correo electrónico.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define guardar 

typedef struct contacto {
   char nombre[100];
   char numero[16];
   char correo[100];
} contacto;


int main (){

	contacto * persona;
	persona = (contacto*) malloc(10 * sizeof(contacto));

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

	   			for (x = 0; x < guardar; x++) {
	       			printf("Introduce Su Nombre: ");
	        		scanf("%s",&persona[x].nombre);
	        		printf("Introduce su Numero: ");
	        		scanf("%s",&persona[x].numero);
	        		printf("Introduce su Correo: ");
	        		scanf("%s",&persona[x].correo );

	        		printf("Su contacto se ha guardado correctamente \n");
	    		}
        }

        else if (opcion == 2) {

        		while()
	        	for (x = 0; x < guardar; x++) {
	        		printf("\n Contacto %d: %s %s %s", x+1, persona[x].nombre, persona[x].numero, persona[x].correo);
	        	}
        } 

        else if (opcion == 3) {
        } 

        else if (opcion == 4) {

        	printf("\n\nElemento a Borrar: ");
			scanf("%d", &posicion);

				if (posicion >= 5 || posicion < 1) {
					printf("No se ha eliminado nada...");
				} 

				else {
					for (x = posicion; x <= 4; x++) {

						printf("\n Se ha eliminado el contacto %s\n",persona[x]);
						persona[x] = persona[x+1];
					}
				}
        }

        else if (opcion == 5) {
        	printf("Hasta luego!\n");
        }

        else {
            printf("ERROR::Opcion no valida");
        }
    } 

    free(persona);





	printf("\n");
	return 0;
}
