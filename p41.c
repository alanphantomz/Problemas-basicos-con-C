#include <stdio.h>
int max(int a, int b){
    if(a >= b)return a;
    return b;
}
int min(int a, int b){
    if(a <= b)return a;
    return b;
}
int MCD(int m, int n){
    int mcd = 0;
    int a = max(m, n);
    int b = min(m, n);
    do{
        mcd = b;
        b = a % b;
        a = mcd;
    }while(b != 0);
    return mcd;
}

int mcm(int m, int n){
    int mcm = 0;
    int a = max(m, n);
    int b = min(m, n);
    mcm = (a/MCD(a, b)) * b;
    return mcm;
}

int main(){
    int  m, n;
    printf("m: "); scanf("%d", &m);
    printf("n: "); scanf("%d", &n);
    printf("El MCD de %d y %d es: %d\n", m, n, MCD(m, n));
    printf("El mcm de %d y %d es: %d\n", m, n, mcm(m, n));
    return 0;
}
