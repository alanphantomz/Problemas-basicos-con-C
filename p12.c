#include <stdio.h>
int main(){
    int anio = 2009;
    float a = 25.0;
    float b = 19.9;
    while (a >= b){
        anio++;
        a += a * 0.02;
        b += b * 0.03;
    }
    printf("Anio: %d\n", anio);
    return 0;
}
