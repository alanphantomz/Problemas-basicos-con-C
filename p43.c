#include <stdio.h>
int main(){
    int n = 25; //numero de niños
    int one = 6; // niños de un año 6 pañales al dia
    int two = 3; // niños de dos años 3 pañales al dia
    int three = 2; //niños de 3 años 2 pañales al dia
    int i;
    int edad;
    int totalP = 0; // total pañales
    // Lectura de edades
    for(i = 1; i <= n; i++){
        printf("edad %d: ", i);scanf("%d", &edad);
        if(edad == 1)totalP += one;
        if(edad == 2)totalP += two;
        if(edad == 3)totalP += three;
    }
    printf("Total Paniales por dia: %d\n", totalP);
    return 0;
}
