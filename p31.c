#include <stdio.h>

int main(){
    int x, y, i;
    int resul = 1;
    printf("Ingrese entero x: ");scanf("%d", &x);
    printf("Ingrese entero y: ");scanf("%d", &y);
    for(i = 1; i <= y; i++){
        resul *= x;
    }
    printf("\nResultado x a la y: %d\n", resul);
    return 0;
}
