#include <stdio.h>

// Função para conversão
void convertf(float *p_value1, float *p_value2, float *p_value3) {
  float dolar, euro, libra;

  dolar = *p_value1 * 2.0357;
  euro = *p_value1 * 2.7149;
  libra = *p_value1 * 3.2722;

  // mostrando a conversão em dolar, euro e libra do primeiro valor passado como argumento para a função
  printf("\nReal: %.2f\nDolar: %.2f\nEuro: %.2f\nLibra: %.2f", *p_value1, dolar, euro, libra);

  dolar = *p_value2 * 2.0357;
  euro = *p_value2 * 2.7149;
  libra = *p_value2 * 3.2722;

  // mostrando a conversão em dolar, euro e libra do segundo valor passado como argumento para a função
  printf("\n\nReal: %.2f\nDolar: %.2f\nEuro: %.2f\nLibra: %.2f", *p_value2, dolar, euro, libra);

  dolar = *p_value3 * 2.0357;
  euro = *p_value3 * 2.7149;
  libra = *p_value3 * 3.2722;

  // mostrando a conversão em dolar, euro e libra do terceiro valor passado como argumento para a função
  printf("\n\nReal: %.2f\nDolar: %.2f\nEuro: %.2f\nLibra: %.2f", *p_value3, dolar, euro, libra);
}

void main(void) {
  float valor1, valor2, valor3;
  
  printf("Digite três valores em reais(R$):\n");
  scanf("%f%f%f", &valor1, &valor2, &valor3);

  convertf(&valor1, &valor2, &valor3);
  
  getchar();
}