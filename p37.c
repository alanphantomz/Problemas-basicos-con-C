#include <stdio.h>
#include <math.h>
int esCuadradoPerfecto(int n){
    float supCuad = sqrt(n);
    int supCuadEnt = (int)supCuad;
    if(!(supCuad - supCuadEnt))return 1;
    else return 0;
}

int main(){
    int n, i;
    printf("n: "); scanf("%d", &n);
    for(i = 1; i <= n; i++)
        if(esCuadradoPerfecto(i))printf("Cuadrado perfecto: %d\n", i);
    return 0;
}
