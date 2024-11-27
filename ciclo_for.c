#include <stdio.h>

void piramide_estrellas () {

    int contador;

    for(contador = 1; contador <= 10; contador++){
        char estrella = '*';
        for(int i =0; i < contador; i++){
            printf("%c", estrella);
        }
        printf("\n");
    }
}

int main(){
    piramide_estrellas();
    return 0;
}