#include <stdio.h>
#define PROPIEDADES 4 //(peso, altura, nro_huevos, calidad)
#define MAX_GALLINAS 100 // maximo de gallinas

float gallinas[MAX_GALLINAS][PROPIEDADES];

void llenarGallinas(int n){
    int i;
    for(i = 0; i < n; i++){
        printf("------GALLINA %d------\n", i);
        printf("Peso: ");
        scanf("%f", &gallinas[i][0]);
        printf("Altura: ");
        scanf("%f", &gallinas[i][1]);
        printf("Nro_Huevos: ");
        scanf("%f", &gallinas[i][2]);
        gallinas[i][3] = (gallinas[i][0] * gallinas[i][1]) / gallinas[i][2];
    }
}
void mostrarGallinas(int n){
    int i;
    for(i = 0; i < n; i++){
        printf("------GALLINA %d------\n", i);
        printf("Peso: %.2f\nAltura: %.2f\nNro_Huevos: %d\nCalidad: %.2f\n",
               gallinas[i][0], gallinas[i][1], (int)gallinas[i][2], gallinas[i][3]);
    }
}
int main(){
    int n;
    printf("n: ");
    while(1){
        scanf("%d", &n);
        if (n > 0 && n < 100) break;
        else printf("ingrese un numero valido!\n");
    }
    llenarGallinas(n);
    mostrarGallinas(n);
    return 0;
}
