#include <stdio.h>

/**
 * @void - funciones de returno que no retornan algun valor
 */

int suma() {
    int num1 = 1;
    int num2 = 1;

    return num1 + num2;
}

int main() {

    int resultado = suma();

    printf("%i\n", resultado);

    return 0;
}