#include <stdio.h>

int main() {
    char opciones;
    printf("Estos son los caso disponibles:\nA) a\nB) b\nC) c\n");
    printf("Ingresa un caso: ");
    scanf("%c", &opciones);
    printf("\n");
    switch(opciones){
        case'a':
            printf("opcion A\n");
            break;
        case'b':
            printf("opcion B\n");
            break;
        case'c':
            printf("opcion C\n");
            break;
        default:
            printf("Aun no tenemos desarrollado el caso: %c\n\n", opciones);
            break;
    }
}