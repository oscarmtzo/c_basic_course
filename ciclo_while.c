#include <stdio.h>

void piramide_estrella(){

    int contador = 0;
    while(contador < 10) {
        char estrella = '*';

        int i = 0;
        while (i < contador)
        {
            printf("%c", estrella);
            i++;
        }
        
        
        printf("\n");
        contador++;
    }
}

int main() {
    piramide_estrella();
    return 0;
}