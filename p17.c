#include <stdio.h>

int main(){
    int numero = 0;
    int contador = 0;
    float promedio;
    printf("Numero: ");
    scanf("%d", &numero);
    while(numero > 0){
        promedio += numero;
        contador++;
        printf("Numero: ");
        scanf("%d", &numero);
    }
    if (contador != 0){
        promedio /= contador;
        printf("El promedio es: %.2f", promedio);
    }
    return 0;
}
