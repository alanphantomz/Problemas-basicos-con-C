#include <stdio.h>

int main(void)
{
   int denominacion[] = {1000,  900, 500,  400, 100,   90,  50,   40,  10,    9,   5,    4,   1};
   char nombre[][3]   = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
   int cantidad;
   int i;

   printf("Introduce la cantidad: ");
   fflush(stdout);
   if (scanf("%d", &cantidad) != 1 || cantidad < 1)
      return 1;

   for (i = 0; cantidad > 0; i++)
      while ( cantidad >= denominacion[i] )
      {
         printf("%s", nombre[i]);
         cantidad -= denominacion[i];
      }

   return 0;
}
