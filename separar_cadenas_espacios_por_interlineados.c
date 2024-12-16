#include <stdio.h>

char * Tomar_datos(){
    char * datos;
    printf("Ingresa tu nombre: ");
    for (int i =0; datos[i] != '\0'; i++) {
        scanf("%c", datos);
    }
    
    return datos;
    
}

int main() {

    printf("%s", Tomar_datos());

    return 0;
}