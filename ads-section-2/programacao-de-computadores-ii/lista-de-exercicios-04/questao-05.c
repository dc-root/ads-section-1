#include <stdio.h>

void main (void) {
  float trapezeArea, height, largerBase, smallerBase;

  height = 5;
  largerBase = 25;
  smallerBase = 14;

  trapezeArea = (smallerBase + largerBase) * height/2;

  printf("A base do trapezio e igual a: %.2fcm²", trapezeArea);

  getchar();
}