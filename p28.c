#include <stdio.h>
#include <math.h>
int main(){
    int base;
    int numero;
    int resultado = 0;
    int potencia = 0;
    int validez = 1;
    printf("Ingrese base: ");
    scanf("%d", &base);
    printf("Ingrese numero: ");
    scanf("%d", &numero);
    while (numero != 0 ){
        if(numero%10 >= base){
            validez = 0;
            break;
        }
        resultado += (numero%10) * pow(base, potencia);
        potencia++;
        numero /= 10;
    }
    if(validez)printf("\nNumero en base 10: %d\n", resultado);
    else printf("Numero no valido");
    return 0;
}
