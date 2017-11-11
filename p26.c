#include <stdio.h>
#include <math.h>

int main(){
    float C0, I, N, CN;
    printf("Ingrese Capital depositado C_0: ");
    scanf("%f", &C0);
    printf("Ingrese Interes Compuesto I(ej: para 2 por ciento digite 0.02): ");
    scanf("%f", &I);
    printf("Ingrese Numero de anios N: ");
    scanf("%f", &N);
    CN =  C0 * pow(I+1, N);
    printf("\nCapital total C_N = %.3f\n", CN);
    printf("con un Interes de: %.2f\n", I);
    printf("Con un capital base de: %.2f\n", C0);
    return 0;
}
