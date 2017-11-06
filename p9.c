#include <stdio.h>
int main(){
    int n;
    int suma = 0;
    scanf("%d", &n);
    while (n != 0){
        suma += n;
        scanf("%d", &n);
    }
    printf("Suma: %d", suma);
    return 0;
}
