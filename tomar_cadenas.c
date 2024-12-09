#include <stdio.h>

int main () {
    printf("\nIntroduce una funcion cuadratica y yo identificare la variable de los demás simbolos :");
    char entrada_datos[20];
    scanf("%s", entrada_datos);
   
    char * ejemplo = "hola mundo";
    
    printf("ingresaste:\n");
    for(int i = 0; i < sizeof ejemplo; i++ ){

        printf("\n%c", ejemplo[i]);
    }
    return 0;
}