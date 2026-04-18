#include <stdio.h>
int main() {
  float altura;
  float peso;
  float imc;
  printf("Digite a altura da pessoa: ");
  scanf("%f", &altura);
  printf("Digite o peso da pessoa: ");
  scanf("%f", &peso);
  imc = peso / (altura * altura);
  printf("O Indice de Massa Corporal desta pessoa e %f", imc);
  return 0;
}
