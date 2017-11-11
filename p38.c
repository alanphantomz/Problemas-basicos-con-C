#include <stdio.h>

int main(){
    int n, i, j, lado = 1;
    printf("n: "); scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= lado; j++)
            printf("%d", j);
        printf("%d", j);
        for(j = lado; j >=1; j--)
            printf("%d", j);
        printf("\n");
        lado++;
    }
    return 0;
}
