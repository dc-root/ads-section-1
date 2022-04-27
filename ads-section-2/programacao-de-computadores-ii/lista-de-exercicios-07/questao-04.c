#include <stdio.h>

int main() {
  int n;
  float result;

  float calc(int n);

  printf("Digite um numero: ");
  scanf("%d", &n);
  
  result = calc(n);
  printf("resultado: %.2f", result);
  return 0;
}

float calc(int n) {
  if (n == 1) return 2.0;

  return ((n * n + 1) / n) + calc(n -1);
}