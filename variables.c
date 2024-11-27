#include <stdio.h>

int main() {
    char c = 'y'; // tamaño de 1 Byte 0...255

    int a = 20; // 2 bytes -32768 .. 32767
    short e = -1;
    printf("%i\n", a); // le indicamos a printf que le pasaremos una variable que contiene un valor de entero al usar %i, el segundo argumento es la variable a pasarle que queremos que se imprima

    unsigned int u =25; //su tamaño es de 2 bytes y va de 0...65335
    long l = 5923; // requiere un espacio de 4bytes 
    return 0;
}