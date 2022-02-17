#include <stdlib.h>

int main () {
  int produto, fatores;

  for (int  i=1; i<=10; i++) {
    for (int j=1; j<=10; j++) {
      produto = i * j;
      printf("%d x %d = %d\n", i, j, produto);
    }
    printf("\n");
  }

  return 0;
} 