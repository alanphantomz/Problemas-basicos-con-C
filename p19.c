#include <stdio.h>
int esCompuesto(int num){
    int c = 0, i;
    for(i = 1; i <= num; i++)
        if(num % i == 0) c++;
    if (c > 2) return 1;
    else return 0;
}
int main(){
    int suma = 0;
    int i = 0;
    int numero = 2;
    while(i < 100){
        if(esCompuesto(numero)){
            printf("%d ", numero);
            suma += numero * numero;
            i++;
        }
        numero++;
    }
    printf("\n\nSuma total: %d\n", suma);
    return 0;
}
