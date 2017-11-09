#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int sw = 0;
    int oportunidades = 5;
    srand (time(NULL)); // la hora del sistema es la semilla
    int n_azar = rand()%51; // 0<=n_azar<=50
    int inferior = 0;
    int superior = 50;
    int intento;
    while(oportunidades--){
        printf("Estoy pensado en un numero entre %d y %d\n? ", inferior, superior);
        scanf("%d", &intento);
        if (intento == n_azar){
            sw = 1;
            break;
        }
        if (intento < n_azar)inferior = intento;
        else superior = intento;
    }
    if (sw) printf("Felicitaciones... Adivinaste el numero!!!");
    else printf("Lo siento, se acabaron tus oportunidades.");
    return 0;
}
