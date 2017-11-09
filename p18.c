#include <stdio.h>
#define MAX_VENTAS 100
float ventas[MAX_VENTAS][3]; //(venta, descuento 13%, descuento 5%)

void llenarVentas(int n){
    int i;
    printf("-----VENTAS REALIZADAS-----\n");
    for (i = 0; i < n; i++){
        printf("Monto Venta %d: ", (i+1));
        scanf("%f", &ventas[i][0]);
        ventas[i][1] = ventas[i][0] * 0.13;
        if(ventas[i][0] > 2500)
            ventas[i][2] = ventas[i][0] - ventas[i][0] * 0.05;
        else
            ventas[i][2] = ventas[i][0];
    }
}


void obtenerTotales(int n){
    float sumaTotVentas = 0;
    float pagoIva = 0;
    int i;
    for(i = 0; i < n; i++){
        sumaTotVentas += ventas[i][2];
        pagoIva += ventas[i][1];
    }
    printf("\n------RESULTADOS------\n");
    printf("Total Ventas: %.2f\n", sumaTotVentas);
    printf("Pago Iva: %.2f\n", pagoIva);
}

int main(){
    int n;
    printf("Numero de ventas: ");
    scanf("%d", &n);
    llenarVentas(n);
    obtenerTotales(n);
    return 0;
}
