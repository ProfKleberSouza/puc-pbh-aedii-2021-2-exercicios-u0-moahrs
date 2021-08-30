#include <stdio.h>

int main() {
   int n1, n2, n3;
   char *vTipo;

   scanf("%i %i %i", &n1, &n2, &n3);

  if (n1 == n2 && n2 == n3)
    vTipo = "EQUILATERO";
  else if (n1 == n2 || n2 == n3 || n1 == n3)
    vTipo = "ISOSCELES";
  else
    vTipo = "ESCALENO";

  printf("TRIANGULO %s\n", vTipo);
   
   return 0;
}