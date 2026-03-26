#include <stdio.h>
int main() {
  float celsius;
  float fahrenheit;
  printf("Digite a temperatura em Celsius: ");
  scanf("%f", &celsius);
  fahrenheit = (celsius * (9.0 / 5)) + 32;
  printf("%f graus Celsius equivalem a %f graus Fahrenheit", celsius,fahrenheit);
  return 0;
}