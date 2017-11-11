#include <stdio.h>
int sonAmigos(int a, int b){
    int divA = 0, divB = 0, i;
    for(i = 1; i <= a; i++)
        if(a%i == 0)divA += i;
    for(i = 1; i <=b; i++)
        if(b%i == 0)divB += i;
    if(divA == divB)return 1;
    return 0;
}

int main(){
    int n, i, j;
    printf("n: ");scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(j = i; j <= n; j++)
            if(sonAmigos(i, j))printf("Son amigos: (%d, %d)\n", i, j);
    }
    return 0;
}
