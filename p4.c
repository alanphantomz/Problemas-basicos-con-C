#include <stdio.h>
int main(){
    int n, aux, nro_digitos;
    printf("n: ");
    scanf("%d", &n);
    nro_digitos = 0;
    aux = n;
    if (aux == 0) nro_digitos = 1;
    while (aux != 0 ){
        aux = aux / 10;
        nro_digitos++;
    }
    printf("Nro. de digitos: %d", nro_digitos);
    return 0 ;
}
