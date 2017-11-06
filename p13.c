#include <stdio.h>
int main(){
    int a, b, inc_dec = 1;
    while(1){
        printf("a: ");
        scanf("%d", &a);
        printf("b: ");
        scanf("%d", &b);
        if (a != b) break;
    }
    if (a > b) inc_dec = -1;
    while (a != b){
        printf("%d, ", a);
        a += inc_dec;
    }
    printf("%d", a);
    return 0;
}
