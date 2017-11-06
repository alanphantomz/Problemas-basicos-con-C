#include <stdio.h>
#define OBREROS 5 // Numero de obreros
#define HORA 19 // 19bs la hora
#define PRIMA 0.05 // Prima de seguro
#define LIMITE_HORAS // Horas maximas por semana
int matriz_horas[OBREROS][5]; // Semana de 5 dias
float matriz_totales[OBREROS][2]; // 2 Cols: (total, total neto)

// Calcula todo lo pedido en el problema
void calcula(float *totalG, float *primaG){
    int i, j, extras, horas_trabajadas, tot_sinDesc = 0;
    for(i = 0; i < OBREROS; i++){
        horas_trabajadas = 0;
        extras = 0;
        for(j = 0; j < 5; j++)
            horas_trabajadas += matriz_horas[i][j];
        if(horas_trabajadas > 40){
            extras = horas_trabajadas - 40;
            matriz_totales[i][0] = extras * HORA * 2 + 40 * HORA;
        }else matriz_totales[i][0] = horas_trabajadas * HORA;
        matriz_totales[i][1] = matriz_totales[i][0] - matriz_totales[i][0] * PRIMA;
        *totalG += matriz_totales[i][1];
        tot_sinDesc += matriz_totales[i][0];
    }
    *primaG = tot_sinDesc - *totalG;
}

void mostrar_resultados(float *totalG, float *primaG){
    int i;
    printf("------Pago por obrero------\n");
    printf("Pago total - Pago neto(descontando prima)\n");
    for(i = 0; i < OBREROS; i++)
        printf("%.2f - %.2f\n", matriz_totales[i][0], matriz_totales[i][1]);
    printf("------Pago Total y Prima Total------\n");
    printf("Pago General: %.2f\n", *totalG);
    printf("Prima General: %.2f\n", *primaG);
}

// Define las horas trabajadas en una semana especifica
void llena_horas(){
    // Obrero: Juan
    matriz_horas[0][0] = 8; // lunes
    matriz_horas[0][1] = 8; // martes
    matriz_horas[0][2] = 10; // miercoles
    matriz_horas[0][3] = 8; // jueves
    matriz_horas[0][4] = 9; // viernes

    // Obrero: Manuel
    matriz_horas[1][0] = 8; // lunes
    matriz_horas[1][1] = 8; // martes
    matriz_horas[1][2] = 11; // miercoles
    matriz_horas[1][3] = 8; // jueves
    matriz_horas[1][4] = 10; // viernes

    // Obrero: Felipe
    matriz_horas[2][0] = 9; // lunes
    matriz_horas[2][1] = 9; // martes
    matriz_horas[2][2] = 8; // miercoles
    matriz_horas[2][3] = 8; // jueves
    matriz_horas[2][4] = 5; // viernes

    // Obrero: Ivan
    matriz_horas[3][0] = 7; // lunes
    matriz_horas[3][1] = 7; // martes
    matriz_horas[3][2] = 8; // miercoles
    matriz_horas[3][3] = 9; // jueves
    matriz_horas[3][4] = 5; // viernes

    // Obrero: Americo
    matriz_horas[4][0] = 4; // lunes
    matriz_horas[4][1] = 2; // martes
    matriz_horas[4][2] = 8; // miercoles
    matriz_horas[4][3] = 9; // jueves
    matriz_horas[4][4] = 9; // viernes
}
int main(){
    llena_horas();
    float pago_general = 0, prima_general = 0;
    calcula(&pago_general, &prima_general);
    mostrar_resultados(&pago_general, &prima_general);
    return 0;
}
