#include <stdio.h>

int global_pila_o__stack_num = 23;

int main () {
    int num_desde_stack_pila = 45;

    char * puntero_heap_hacia_arreglo_cadenas = "hola mundo";

    int tamano_puntero = sizeof puntero_heap_hacia_arreglo_cadenas;

    for(int i = 0; puntero_heap_hacia_arreglo_cadenas[i] != '\0'; i++){
        printf("%c\n", puntero_heap_hacia_arreglo_cadenas[i]);
    }

    printf("\n%i\n", tamano_puntero);

    printf("%c\n", puntero_heap_hacia_arreglo_cadenas[sizeof puntero_heap_hacia_arreglo_cadenas-1]);
    return 0;
}