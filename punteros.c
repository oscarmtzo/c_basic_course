#include <stdio.h>
/**
 * {stdlid.h} - es el paquete que inluye free() 
 * */ 
#include <stdlib.h>

void primeros_pasos_punteros(){
    int numero_A= 10;

    /**
     * @pointer - se iniciliza con "int"
     * - crear puntero "*" como prefijo del nombre 
     * - "&" para atar el valor al que referencia el puntero
     */
    int *puntero_de_numero_A= &numero_A;

    printf("\nLa direccion en memoria de numero_A es: %p\n\n", &puntero_de_numero_A);
	
}

void change_value(char letra){

    letra='b';
}

/**
 * @function {change_value_by_pointer} - cambia el valor de una variable accediendo a su espacio especifico en memoria 
 */
void change_value_by_pointer(char *letra) {
    *letra='b';
}
int main(){
    // char l;
    // l = 'a';
    //change_value(l);
    // printf("%c\n", l);

    // char l2='a';
    // change_value_by_pointer(&l2);
    // printf("Valor cambiado gracias al uso del  acceso del puntero %c\n", l2);
    // -> 'b'

    /**
     * @function - {malloc()} - memory alloctor
     */
    char *puntero = malloc(1);
    // char *puntero = malloc(sizeof(char));
    if (puntero == NULL){
        fprintf(stderr, "Error: No se pudo asignar la memoria");
        return 1;
    } 
    *puntero = 'a';
    change_value_by_pointer(puntero);
    printf("%c\n", *puntero);
    free(puntero);

    char cadena[] = "Hola mundo";
    printf("%s\n", cadena);
    return 0;
}
