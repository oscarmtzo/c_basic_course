#include <stdio.h>
#include <stdbool.h>

bool imprimir_contador(int año) {
    if(año %4 == 0) {
        return true;
    } else{
        return false;
    }
}

int main() {
    int contador = 1;
    // int valor = imprimir_contador(1997)?1:0;
    bool valor = imprimir_contador(1997);
    printf("%i\n\n", (int)valor);
    do{
        printf("%i\n", contador);
        contador++;
    } while(contador < 10);
    return 0;
}