#include <stdio.h>

int main(){
    int a, b, nPares = 0, i;
    printf("Ingrese a: ");scanf("%d", &a);
    printf("Ingrese b: ");scanf("%d", &b);
    for(i = a; i <= b; i++)
        if(i%2 == 0)nPares++;
    printf("Pares: %d", nPares);
    return 0;
}
