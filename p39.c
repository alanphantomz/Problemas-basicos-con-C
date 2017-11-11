#include <stdio.h>
int esCapicua(int num){
    int nnum = 0;
    int aux = num;
    while(num != 0){
        nnum = nnum * 10 + num  % 10;
        num /= 10;
    }
    if(aux == nnum)return 1;
    else return 0;
}

int invierte(int num){
    int nnum = 0;
    while(num != 0){
        nnum = nnum*10 + num  % 10;
        num /= 10;
    }
    return nnum;
}

int main(){
    int i, n, m, num, sw;
    printf("n: "); scanf("%d", &n);
    printf("m: "); scanf("%d", &m);
    for(i = n; i <= m; i++){
        num = i;
        sw = 0;
        while(1){
            num += invierte(num);
            if(esCapicua(num)){
                    sw = 1;
                    break;
            }
        }
        if(sw)printf("Con el %d se logro el capicua: %d\n", i, num);
    }
    return 0;
}
