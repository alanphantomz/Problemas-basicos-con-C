#include <stdio.h>
void lee(int *dia, int *mes, int *anio){
    // Lectura y validación de fecha
    while (1){
        scanf("%d", dia);
        scanf("%d", mes);
        scanf("%d", anio);
        if (*dia <= 30 && *dia >= 1 &&
            *mes <= 12 && *mes >= 1 &&
            *anio <= 2999 && *anio >= 1900)
            break;
        printf("Fecha no valida de nuevo: ");
    }
}
int main(){
    int dia1, mes1, anio1;
    int dia2, mes2, anio2;

    // Lectura de fechas
    printf("Formato: dia mes anio Ej.: 01 05 1995\n");
    printf("Fecha 1: ");
    lee(&dia1, &mes1, &anio1);
    printf("Fecha 2: ");
    lee(&dia2, &mes2, &anio2);

    int anio_dif = anio2 - anio1;
    int mes_dif = mes2 - mes1;
    int dia_dif = dia2 - dia1;

    int total_dif = anio_dif * 360 + mes_dif * 30 + dia_dif;
    if (total_dif < 0) total_dif *= -1;
    printf("Dias de diferencia: %d", total_dif);

    return 0;
}
