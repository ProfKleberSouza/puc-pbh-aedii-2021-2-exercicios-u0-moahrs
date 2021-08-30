#include <stdio.h>

int main() {
   int vT, vV, vR, vD;
   float vL;

   scanf("%i %i %i", &vT, &vV, &vR);
   
   vD = vT * vV;
   vL = vD / vR;
   
   printf("R = %i\n", vR);
   printf("V = %i\n", vV);
   printf("T = %i\n", vT);
   printf("D = %i\n", vD);
   printf("L = %f\n", vL);
   
   return 0;
}