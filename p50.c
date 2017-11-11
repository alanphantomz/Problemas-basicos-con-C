#include <stdio.h>

int factorial(int n){
    int facto = 1, i;
    for(i = 1; i<=n; i++)facto *= i;
    return facto;
}

int main(){
    int n, m;
    printf("n: "); scanf("%d", &n);
    printf("m: "); scanf("%d", &m);
    if (m > n)printf("Error m debe ser menor o igual que n");
    else{

        // se usa la formula del enunciado, aunque no funciona para numeros muy grandes
        int num = factorial(n);
		int den = factorial(m) * factorial((n-m));
		float res = num/den;
		printf("El coeficiente binomial es: %d\n", (int)res);
    }
    return 0;
}
