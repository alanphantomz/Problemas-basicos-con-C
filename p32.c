#include <stdio.h>
#include <math.h>

int factorial(int n){
    int i, facto = 1;
    for(i = 1; i <= n; i++)facto *= i;
    return facto;
}

float sino(float x, int aprox){
    int impares = 3;
    float sin = x;
    int i;
    for(i = 1; i <= aprox; i++){
        sin += pow(-1, i)*(pow(x, impares)/factorial(impares));
        impares += 2;
    }
    return sin;
}

float coso(float x, int aprox){
    int pares = 2;
    float cos = 1;
    int i;
    for(i = 1; i <= aprox; i++){
        cos += pow(-1, i)*(pow(x, pares)/factorial(pares));
        pares += 2;
    }
    return cos;
}

int main(){
    int aprox = 0;
    float x;
    printf("Ingrese x: ");scanf("%f", &x);
    printf("Ingrese aproximacion: ");scanf("%d", &aprox);
    printf("\nSin(x): %.2f\n", sino(x, aprox));
    printf("Cos(x): %.2f\n", coso(x, aprox));
    return 0;
}
