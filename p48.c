#include <stdio.h>

int esPrimo(int num){
    int i, c = 0;
    for(i = 1; i <= num; i++)
        if(num%i == 0)c++;
    if(c == 2)return 1;
    return 0;
}

int main(){
    int n, suma = 0;
    printf("n: "); scanf("%d", &n);
    while(n != 0){
        if (n%10 != 0)suma += n % 10;
        n /= 10;
    }
    if(esPrimo(suma))printf("La suma de sus digitos es primo\n");
    else printf("La suma de sus digitos no es primo\n");
    return 0;
}
