#include <stdio.h>

int ope(int a, int b, char c){
    int resul = -1;
    switch(c){
    case 's':
        resul = a + b;
        break;
    case 'r':
        resul = a - b;
        break;
    case 'm':
        resul = a * b;
        break;
    case 'd':
        resul = a / b;
        break;
    }

    return resul;
}

int main(){
    char operacion;
    int a, b;
    printf("Ingrese codigo de operacion:\n");
    printf("Multiplicar: m\n");
    printf("Dividir: d\n");
    printf("Sumar: s\n");
    printf("Restar: r\n");
    scanf("%c", &operacion);
    printf("Ingrese a: ");scanf("%d", &a);
    printf("Ingrese b: ");scanf("%d", &b);
    int aux = ope(a, b, operacion);
    printf("Resultado de operacion: %d", aux);
    return 0;
}
