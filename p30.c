#include <stdio.h>

int main(){
    int dividendo;
    int divisor;
    int cociente = 0;
    int resto;
    printf("Ingrese dividendo: "); scanf("%d", &dividendo);
    printf("Ingrese divisor: "); scanf("%d", &divisor);
    while(dividendo >= divisor){
        dividendo = dividendo - divisor;
        cociente++;
    }
    resto = dividendo;
    printf("\nCociente: %d\n", cociente);
    printf("Resto: %d\n", resto);
    return 0;
}
