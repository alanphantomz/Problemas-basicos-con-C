#include <stdio.h>

int main(){
    int n, aux, sw = 0, swa;
    printf("n: ");scanf("%d", &n);
    aux = n;
    while(n--){
        int i;
        sw = 1 - sw;
        swa = sw;
        for(i = 0; i < aux; i++){
            printf("%d ", swa);
            swa = 1 - swa;
        }
        printf("\n");
    }
    return 0;
}
