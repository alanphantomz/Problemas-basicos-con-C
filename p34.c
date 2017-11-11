#include <stdio.h>

int main(){
    int n;
    printf("Ingrese n: ");scanf("%d", &n);
    int i;
    while(n--){
        for(i = 1; i <= n; i++)
            printf("%d ", i);
        printf("\n");
    }
    return 0;
}
