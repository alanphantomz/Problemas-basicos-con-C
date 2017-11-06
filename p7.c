#include <stdio.h>
int suma_digitos(int num){
    if (num == 0) return 1;
    int sum = 0;
    while(num != 0){
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}
int main(){
    int n, ultima_suma, i;
    printf("n: ");
    scanf("%d", &n);
    ultima_suma = 0;
    printf("%d ", 1);
    for(i = 1; i < n; i++){
        ultima_suma = ultima_suma + suma_digitos(ultima_suma);
        printf("%d ", ultima_suma);
    }
    return 0;
}
