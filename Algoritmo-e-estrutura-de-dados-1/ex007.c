#include <stdio.h>
int main() {
float salario;
float imposto;
float bonus;
float salarioLiquido;
printf("Informe seu salario:");
scanf("%f", &salario);
bonus = salario/100*5;
imposto = salario/100*7;
salarioLiquido = salario+bonus-imposto;
printf("Seu salario considerando bonus e impostos eh de %f", salarioLiquido);
return 0;
}