#include <stdio.h>

int main() {
  int n, s;
  
  // ENTRADA DE DADOS
  scanf("%d", &n);

  int v[n];
  int vMenor, vMaior;

  for (int ix = 0; ix < n; ix++)
    scanf("%d", &v[ix]);

  vMenor = v[0];
  vMaior = v[0];

  for (int ix = 0; ix < n; ix++)
  {
    if (v[ix] < vMenor)
      vMenor = v[ix];

    if (v[ix] > vMaior)
      vMaior = v[ix];
  }

   printf("MENOR = %i\n", vMenor);
   printf("MAIOR = %i\n", vMaior);

   return 0;
}