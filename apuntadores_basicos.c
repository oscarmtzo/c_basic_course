#include <stdio.h>

/**
 * apuntadores
 * son como variables sin valores especificos
 */

int cubo_por_valor(int numero) {

    numero = numero*numero*numero;
    printf("Valor del cubo del numero por valor: %i\n", numero);
    return numero;
}

int main(){
    // cuando se crea una variable es una caja con una direccion en donde encontrarla

    int caja = 2;
    int *referencia_var_apuntador = &caja;
    
    printf("%i\n", *referencia_var_apuntador);


    printf("Direccion en memoria forma hexadecimal: %p\n", referencia_var_apuntador);
    printf("Hola mundo\n");   
    
    int ejemplo_numero = 5;
    printf("Valor de numero original: %i\n", ejemplo_numero);

    cubo_por_valor(ejemplo_numero);
    printf("Valor de numero original despues de ejecucion de funcion %i\n", ejemplo_numero);

    printf("\n\n");
    char * name = "John";
    /**
     * @string {%s} - nos permite imprimir el apuntador de cadenas "name"
     */
    printf("%s", name);
    printf("\n\n");
    return 0;
}