#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int esPrimo(int num){
    int i, c = 0;
    for(i = 1; i <= num; i++)
        if(num%i == 0)c++;
    if(c == 2)return 1;
    return 0;
}

int main(){
    int n, suma = 0, i, n_azar;
    int primos = 0;
    srand (time(NULL)); // la hora del sistema es la semilla
    for(i = 0; i < 50; i++){
        n_azar = rand()%99 + 1; // 0<=n_azar<=50
        if(esPrimo(n_azar))primos++;
    }
    printf("\nPrimos encontrados: %d\n", primos);
    return 0;
}
