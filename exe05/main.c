#include <stdio.h>

int main() {
  int n1, n2, n3, n4;
  float vNota;
  char *vRes;

  scanf("%i %i %i %i", &n1, &n2, &n3, &n4);

  vNota = (n1 + n2 + n3 + n4) / 4;

  if (vNota >= 6)
    vRes = "APROVADO";
  else
    vRes = "REPROVADO";

  printf("NOTA = %2.1f (%s)\n", vNota, vRes);

  return 0;
}