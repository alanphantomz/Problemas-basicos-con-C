#include <stdio.h>
#define  MAXIMO 100 // maximo de vendedoras
float plantilla[MAXIMO + 1][5]; //(antiguedad, sueldobase, nroprodVendidos, totalVentas, comision)

float calculaSueldo(float sueldo,float i,float m,float s,float ant){
    if(ant < 5)return sueldo + sueldo * i;
    if(ant < 10)return sueldo + sueldo * m;
    return sueldo + sueldo * s;
}

void leer(int n, float inf, float med, float sup, float comision){
    printf("---Ingrese los datos de planilla para este mes:---\n");
    int i;
    float sueldo;
    for(i = 1; i <= n; i++){
        printf("---VENDEDORA %d---\n", i);
        printf("Antiguedad: ");
        scanf("%f", &plantilla[i][0]);
        printf("sueldo(sin contar la antiguedad): ");
        scanf("%f", &sueldo);

        // sueldo segun la antiguedad
        plantilla[i][1] = calculaSueldo(sueldo, inf, med, sup, plantilla[i][0]);

        printf("Nro Ventas: ");
        scanf("%f", &plantilla[i][2]);
        printf("Total Recaudado por ventas: ");
        scanf("%f", &plantilla[i][3]);
        plantilla[i][4] = plantilla[i][3]*comision; // comisiones ganadas
    }
}

void mostrarResultados(int n){
    int i;
    printf("---Sueldos y Comisiones por empleado:---\n");
    for(i = 1; i <= n; i++){
        printf("***VENDEDOR %d***\n", i);
        printf("Total Sueldo: %.2f\n", plantilla[i][1]);
        printf("Total Comision: %.2f\n", plantilla[i][4]);
    }
}

int main(){
    int n;
    float porcentajeInf = 0.05; // 0 <= antiguedad < 5 => 5% por antiguedad
    float porcentajeMed = 0.10; // 5 <= antiguedad < 10 => 10% por antiguedad
    float porcentajeSup = 0.15; // 10 <= antiguedad  => 15% por antiguedad
    float comisionVentas = 0.10; // comision por el total de ventas realizadas
    printf("Ingrese el numero de vendedoras: ");
    scanf("%d", &n);
    leer(n, porcentajeInf, porcentajeMed, porcentajeSup, comisionVentas);
    mostrarResultados(n);
    return 0;
}
