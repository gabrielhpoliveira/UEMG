#include <stdio.h>
int main() {
  float raio;
  float area;
  float perimetro;
  printf("Digite o raio do circulo: ");
  scanf("%f", &raio);
  area = (raio * raio) * 3.14159;
  perimetro = 2 * 3.14159 * raio;
  printf("Um circulo de raio %f possui area %f e perimetro %f", raio, area, perimetro);
  return 0;
}