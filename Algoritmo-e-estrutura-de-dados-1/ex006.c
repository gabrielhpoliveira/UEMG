#include <stdio.h>
int main() {
float celsius;
float fahrenheit;
printf("Digite a temperatura em Fahrenheit:");
scanf("%f", &fahrenheit);
celsius = 5.0 * (fahrenheit-32.0)/9;
printf("A temperatura em Celsius eh %f", celsius);
return 0;
}