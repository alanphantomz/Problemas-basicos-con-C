#include <stdio.h>

float raizBabilonico(float x){
    float b = x;
    float h = 1;
    float aproxInf = h - 0.5;
    float aproxSup = h + 0.5;
    while(b > aproxSup || b < aproxInf){
        b = (h + b) / 2;
        h = x / b;

        // una aproximacion +- 0.0125
        aproxInf = h - 0.0125; // para la aproximacion
        aproxSup = h + 0.0125; // para la aproximacion
    }
    return b;
}

int main(){
    float num;
    printf("Ingrese numero: ");
    scanf("%f", &num);
    printf("\nSu raiz: %.2f\n", raizBabilonico(num));
    return 0;
}
