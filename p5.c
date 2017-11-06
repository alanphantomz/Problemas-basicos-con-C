#include <stdio.h>
int main(){
    int n, nn = 0, aux;
    printf("n: ");
    scanf("%d", &n);
    aux = n;
    while(aux != 0){
        nn = nn * 10 + aux % 10;
        aux = aux / 10;
    }

    printf("Al revez: %d", nn);
    return 0;
}
