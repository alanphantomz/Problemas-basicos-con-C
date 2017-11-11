#include <stdio.h>

int main(){
    int a = 0;
    int b = 1;
    int aux;
    int n = 150;
    int i;
    for(i = 1; i <= n; i++){
        printf("%d, ", a);
        aux = b;
        b = a + aux;
        a = aux;
    }
    printf("\n");
    return 0;
}
