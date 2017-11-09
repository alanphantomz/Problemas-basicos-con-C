#include <stdio.h>
#define NRO_EMPLEADOS 100 // maximo 100 empleados

float ventas[NRO_EMPLEADOS][4]; //(venta1, venta2, venta3, total_comisiones);

void llenarDatos(int n){
    printf("---DATOS DE VENTAS SEMANALES---\n");
    int i, j;
    for(i = 0; i < n; i++){
        printf("---VENDEDOR %d---\n", (i+1));
        for(j = 0; j < 3; j++){
            printf("Monto venta %d: ", (j+1));
            scanf("%f", &ventas[i][j]);
        }
        ventas[i][j] = ventas[i][0]*0.1 + ventas[i][1]*0.1 + ventas[i][2]*0.1; //comisión
    }
}

void mostrarResultados(int n, float sueldo_base){
    printf("---RESULTADOS---\n");
    int i, j;
    for(i = 0; i < n; i++){
        printf("---VENDEDOR %d---\n", (i+1));
        printf("Comision: %.2f\n", ventas[i][3]);
        printf("Total a recibir(mas sueldo base): %.2f\n", (ventas[i][3]+sueldo_base));
    }
}

int main(){
    int n;
    float sueldo_base;
    printf("Ingrese el numero de empleados: ");
    scanf("%d", &n);
    printf("Ingrese Sueldo base: ");
    scanf("%f", &sueldo_base);
    llenarDatos(n);
    mostrarResultados(n, sueldo_base);
    return 0;
}
