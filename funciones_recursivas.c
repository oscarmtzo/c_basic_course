#include <stdio.h>

/*
*@function - recursiva se refiere a la capacidad de llamarse a si mismas
*/

long Factorial(long numero) {
    int factor_inicial = 1;
    for (int i = numero; i > 0; i--)
    {
        factor_inicial *= i;
    }
    return factor_inicial;
}

long Factorial_recursiva(int numero) {
    if(numero <= 1) {
        return 1;
    } else {
        return numero * Factorial_recursiva(numero -1);
    }
}

int main() {
    int numero;
    int copia_numero = 0;
    printf("Ingresa el numero que quieres realizar factorial: ");
    scanf("%i", &numero);
    copia_numero += numero;
    int resultado1 = Factorial(numero);

    printf("\ntu factorial es: %i\n", resultado1);

    int resultado2 = Factorial_recursiva(copia_numero);

    printf("\ntu factorial es: %i\n", resultado2);
    return 0;
}
