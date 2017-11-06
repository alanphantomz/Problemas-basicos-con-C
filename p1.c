#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    float discriminante, x1, x2;

    // Lectura de datos
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);

    // Validando denominador != 0
    if (a == 0){
        printf("No hay solucion por que no existe division entre cero.");
        return 0;
    }

    // Validando el discriminante
    discriminante = pow(b, 2) - 4 * a * c;
    if (discriminante < 0){
        printf("La ecuación no tiene soluciones reales!!!");
    }else{
        if (discriminante == 0){
            // Solo tiene 1 solución
            x1 = -b / (2 * a);
            printf("Solucion: x1 = x2 = %.2f", x1);
        }else{
            // Tiene 2 soluciones
            x1 = (-b + sqrt(discriminante)) / (2 * a);
            x2 = (-b - sqrt(discriminante))/ (2 * a);
            printf("Solucion: x1 = %.2f, x2 = %.2f", x1, x2);
        }
    }
    return 0;
}
