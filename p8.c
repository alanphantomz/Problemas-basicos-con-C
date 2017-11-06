#include <stdio.h>
void lee(float compras[][2], int n){
    int i;
    for(i = 1; i <= n; i++){
        printf("Cliente %d: ", i);
        scanf("%f", &compras[i - 1][0]);
    }
}
void muestra(float compras[][2], int n){
    int i;
    for(i = 1; i <= n; i++){
        printf("Cliente %d: ", i);
        printf("%.2f Descontando: %.2f\n", compras[i - 1][0], compras[i - 1][1]);
    }
}

void descuenta(float compras[][2], int n){
    int i;
    for(i = 0; i < n; i++){
        if (compras[i][0] < 100){
            compras[i][1] = compras[i][0];
        }else if(compras[i][0] > 100 && compras[i][0] < 500){
            compras[i][1] = compras[i][0] - compras[i][0] * 0.05;
        }else if(compras[i][0] > 500){
            compras[i][1] = compras[i][0] - compras[i][0] * 0.08;
        }
    }
}
int totales(float v[][2], int n){
    int i;
    v[n][0] = v[n][1] = 0;
    for(i = 0; i < n; i++){
        v[n][0] += v[i][0];
        v[n][1] += v[i][1];
    }
}
int main(){
    int n;
    printf("Numero de clientes: ");
    scanf("%d", &n);
    float compras[n+1][2];
    lee(compras, n);
    descuenta(compras, n);
    totales(compras, n);
    muestra(compras, n);
    printf("Ventas totales sin descuento: %.2f\n", compras[n][0]);
    printf("Ventas totales con descuento: %.2f\n", compras[n][1]);
    return 0;
}
