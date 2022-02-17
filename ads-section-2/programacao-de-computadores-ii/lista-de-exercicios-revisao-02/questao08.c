#include <stdlib.h>

int main () {
  int numeroPares=2, sumNumerosPares=0;
  
  for(; numeroPares<=50; numeroPares++) {
    if (numeroPares % 2 == 0) {
      sumNumerosPares += numeroPares;
    }
  }

  printf("%d\n", sumNumerosPares);
  return 0;
} 