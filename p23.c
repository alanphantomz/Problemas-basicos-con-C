#include <stdio.h>
int main(){
    int num;
    int sum_div = 1;
    printf("Ingrese numero: ");
    scanf("%d", &num);
    int i;
    for(i = 2; i <= num/2; i++)
        if(num % i == 0)sum_div += i;
    if(sum_div == num)printf("Es perfecto!!\n");
    else printf("No es perfecto.\n");
    return 0;
}
