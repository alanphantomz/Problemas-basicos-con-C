#include <stdio.h>
#define MAXIMO 100
float carrito[MAXIMO][2]; // (cantidad, precio)

int main(){
    int i;
    int total = 0;
    char continuar;
    printf("Bienvenida a su carrito de compras!!!\n");
    printf("Digite cantidad y precio de cada producto a comprar\n");
    for(i = 0; i < 100; i++){
        printf("\n----Compra%d----\n", (i+1));
        printf("Cantidad: ");
        scanf("%f", &carrito[i][0]);
        printf("Precio: ");
        scanf("%f", &carrito[i][1]);
        total += carrito[i][0]*carrito[i][1];
        continuar;
        printf("Continuar (s/n)? ");
        scanf("%c");// no interesa el salto de linea '\n'
        scanf("%c", &continuar);
        if(continuar == 'N' || continuar == 'n')break;
    }
    printf("El total a cancelar es: %d", total);
    return 0;
}
