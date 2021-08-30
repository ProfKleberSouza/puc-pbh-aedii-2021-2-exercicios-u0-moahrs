#include <stdio.h>
#include <string.h>

int main() {
  int n1;
  char *vS1, *vS2;

  scanf("%i",&n1);

  if (n1 % 2 != 0)
    vS1 = "IMPAR";
  else
    vS1 = "PAR";

  if (n1 < 0)
    vS2 = "NEGATIVO";
  else
    vS2 = "POSITIVO";

  printf("NUMERO %s %s\n", vS1, vS2);
  
  return 0;
}