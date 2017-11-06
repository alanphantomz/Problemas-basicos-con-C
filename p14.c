#include <stdio.h>
# define MONEDAS 5
float monedas[] = {5, 1, 0.50, 0.20, 0.10};
int solucion[MONEDAS] = {0, 0, 0, 0, 0};

int main(){
    int i;
    float devolucion;
    float precio_prod;
    float dinero_recibido;

    // Valida input
    while(1){
        printf("Precio del producto: ");
        scanf("%f", &precio_prod);
        printf("Dinero a entregar: ");
        scanf("%f", &dinero_recibido);
        if (precio_prod <= dinero_recibido)break;
        else printf("El dinero no le alcanza!\n");
    }

    devolucion = dinero_recibido - precio_prod;

    // Calcula monedas para el cambio
    for (i = 0; i < MONEDAS; i++)
        while(devolucion >= monedas[i]){
            solucion[i]++;
            devolucion -= monedas[i];
        }

    // Muestra el cambio
    if(devolucion)
        printf("No hay monedas para devolver\n");
    else
        for(i = 0; i < MONEDAS; i++)
            if(solucion[i])
                printf("%d monedas de %.2f\n", solucion[i], monedas[i]);
    return 0;
}
