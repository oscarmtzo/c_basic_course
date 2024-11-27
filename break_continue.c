#include <stdio.h>

int main(){
    int tamaño_piramide;
    printf("De cuantos escalones quieres tu piramide?: ");
    scanf("%i",&tamaño_piramide);
    /**
     * @break - detiene el bucle o la ejecucion hasta ese punto de un ciclo
     * @continue - salta ese unico paso dentro del bucle  
     */

    
    for(int i = 0 ; i < tamaño_piramide; i++){
        if(i == 0) {
                continue;
        } /*else if (i == 9){
            break;
        }*/
        else {
            if (i < 10)
            {
                printf(" %i:", i);
                
            }
            else{
                printf("%i: ", i);
            }
        }
        for (int j = 0; j < i; j++)
        {
            if(i % 2 == 0) {
                continue;
            } else {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}