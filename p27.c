#include <stdio.h>

int main(){
    int i, a, b, mul = 0;
    printf("Ingrese a: ");
    scanf("%d", &a);
    printf("Ingrese b: ");
    scanf("%d", &b);
    for (i = 1; i <= b; i++){
        mul += a;
    }
    printf("\nResultado: %d", mul);
    return 0;
}
