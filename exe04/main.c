#include <stdio.h>

int main() {
  int vN[3];
  int vMin, vMax;

  scanf("%i %i %i", &vN[0], &vN[1], &vN[2]);

  vMin = vN[0];
  vMax = vN[0];

  for (int ix=1; ix < 3; ix++)
  {
    if (vN[ix] < vMin)
      vMin = vN[ix];
    
    if (vN[ix] > vMax)
      vMax = vN[ix];
  }
   
  printf("MENOR = %i\n", vMin);
  printf("MAIOR = %i\n", vMax);
  
  return 0;
}