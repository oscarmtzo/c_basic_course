#include <stdio.h>

/**
 * @
 */
void saludo() {
    printf("Hola mundo\n");

    return;
}

int suma(){

    int num1 = 12;
    int num2 = 35;
    return num1 + num2;
}

int main() {

    saludo();

    printf("\n");
    int resultado = suma();

    printf("%i\n",resultado);
    return 0;
}