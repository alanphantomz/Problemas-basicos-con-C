#include <stdio.h>

int main(){
    int num;
    int dig;
    int numOrd = 0;
    int tmp = 0;
    int maximo = 0;
    int ceros = 0;
    printf("num: "); scanf("%d", &num);
    while(maximo <= 9){
        while(num != 0){
           dig = num % 10;
           if(dig == 0)ceros++;
           if(dig == maximo)numOrd = numOrd * 10 + dig;
           else tmp = tmp * 10 + dig;
           num /= 10;
        }
        num = tmp;
        tmp = 0;
        maximo++;
    }
    int i;
    printf("\nOrdenado: ");
    for(i = 1; i <= ceros; i++)printf("0");
    printf("%d\n", numOrd);
    return 0;
}
