#include <stdio.h>

int main(){
    /**
     * @array - arreglos son estaticos y no pueden cambiar su longitud establecida inicial
     * - siempre inicia en posición 0, es decir el valor "3" es el primero
     */
    int arreglo_4_numeros[4] = {3, 4, 2, 6};

    printf("\n");
    
    printf("%i", arreglo_4_numeros[0]);

    printf("\n");

    printf("\nIngresa tu nombre: ");
    char nombre[60];
    printf("\n");
    
    for(int i=0; i < 60; i++){
        scanf("%c", &nombre[i]);
    }
    
    for(int i = 0; i < 60; i++){
        printf("%c", nombre[i]);
    }

    printf("\n");
    return 0;
}