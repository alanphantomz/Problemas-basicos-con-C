#include <stdio.h>
# define MONEDAS 11
float monedas[] = {200,100,50,20,10,5,2,1,0.50,0.20,0.10};
int solucion[MONEDAS] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

int main(){
    int i;
    float dinero_recibido;
    printf("Dinero: ");
    scanf("%f", &dinero_recibido);

    // Calcula monedas para el cambio
    for (i = 0; i < MONEDAS; i++)
        while(dinero_recibido >= monedas[i]){
            solucion[i]++;
            dinero_recibido -= monedas[i];
        }

    for(i = 0; i < MONEDAS; i++)
        if(solucion[i]){
            if(i <= 4)printf("%d billetes de %d\n", solucion[i], (int)monedas[i]);
            else if(i == 5 || i == 6 || i == 7)printf("%d monedas de %d\n", solucion[i], (int)monedas[i]);
            else printf("%d monedas de %.2f\n", solucion[i], monedas[i]);
        }

    return 0;
}
