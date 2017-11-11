#include <stdio.h>

int main(){
    int n;
    int i, j;
    int impares = 1;
    int incremento = 1;
    int cubo = 0;
    printf("n: "); scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= incremento; j++){
            cubo += impares;
            impares +=2;
        }
        printf("Cubo %d: %d\n", i, cubo);
        incremento++;
        cubo = 0;
    }
    return 0;
}
