#include <stdio.h>

int main() {
  int n1;

  while(1)
  {
    scanf("%d", &n1);

    if (n1 == 0)
      break;

    if (n1 < 0)
      printf("NEGATIVO\n");
    else
      printf("POSITIVO\n");
  }

   return 0;
}