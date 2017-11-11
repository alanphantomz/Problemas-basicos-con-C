#include <stdio.h>
char *pequenios[] = {"uno", "dos", "tres","cuatro","cinco","seis","siete","ocho","nueve","diez","once", "doce",
                    "trece", "catorce", "quince", "dieciseis", "diecisiete", "dieciocho", "diecinueve", "veinte"};
char *grandes[] = {"0","veinti","treinta","cuarenta","cincuenta","sesenta","setenta","ochenta","noventa"};

void imprimeLiteral(int num){
    if(num <= 20 && num > 0) {
        printf("%s\n", pequenios[num - 1]);
        return;
    }

    if(num > 20 && num < 30){
        int dig2 = num % 10;
        num /= 10;
        int dig1 = num % 10;
        printf("%s%s\n", grandes[dig1 - 1], pequenios[dig2 - 1]);
    }

    if(num > 29 && num < 100){
        int dig2 = num % 10;
        num /= 10;
        int dig1 = num % 10;
        printf("%s y %s\n", grandes[dig1 - 1], pequenios[dig2 - 1]);
    }else printf("Numero no valido\n");

}

int main(){
    int num;
    printf("num: "); scanf("%d", &num);
    imprimeLiteral(num);
    return 0;
}
