#include <stdio.h>

int main () {

    int a = 90;
    printf("    entero:%i\n    floatante:%.2f\n     double:%.3f\n   caracter:%c\n",a,(float)a, (double)a, (char)a);
    float f = 45.895;

    printf("Aqui se realizó un casting oconversion de floatnte a entero con el valor de f:%i\n", (int)f);

    float suma_f_a = (float)a + f;

    printf("suma de entero y flotante con conversion a float %f\n", suma_f_a);
    return 0;
}