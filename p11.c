#include <stdio.h>
int factorial(int n){
    int i;
    int facto = 1;
    for(i = 1; i <= n; i++){
        facto = multiplica(facto, i);
    }
    return facto;
}

int multiplica(int a, int b){
    // La multiplicación se reduce a sumas
    int prod = 0, i;
    for(i = 1; i <= b; i++)prod += a;
    return prod;
}

int main(){
    int n, facto;
    printf("n: ");
    scanf("%d", &n);
    facto = factorial(n);
    printf("El factorial: %d\n", facto);
    return 0;
}
