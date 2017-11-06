#include <stdio.h>
void lee(float v[][2], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("-----Alumno %d-----\n", (i+1));
        printf("Edad: ");
        scanf("%f", &v[i][0]);
        printf("Altura: ");
        scanf("%f", &v[i][1]);
    }
}
void muestra(float v[][2], int n){
    int i;
    for(i = 1; i <= n; i++){
        printf("alumno %d: ", i);
        printf("Edad = %d, Estatur = %.2f\n", (int)v[i - 1][0], v[i - 1][1]);
    }
}

int main(){
    int n, i;
    float edad_media = 0;
    float est_media = 0;
    int mayores = 0;
    int altos = 0;

    printf("Numero de alumnos: ");
    scanf("%d", &n);
    float alumnos[n][2];
    lee(alumnos, n);
    printf("-----Alumnos ingresados-----\n");
    muestra(alumnos, n);
    for (i = 0; i < n; i++){
        edad_media += alumnos[i][0];
        est_media += alumnos[i][1];
        if (alumnos[i][0] > 18) mayores++;
        if (alumnos[i][1] > 1.75) altos++;
    }
    edad_media /= n;
    est_media /= n;

    printf("Edad media: %.2f\n", edad_media);
    printf("Estatura media: %.2f\n", est_media);
    printf("Mayores de 18 anios: %d\n", mayores);
    printf("Arriba de 1.75: %d\n", altos);
    return 0;
}
