#include <stdio.h>
#include <math.h>
int main() {
float catetoA;
float catetoB;
float hipotenusa;
printf("Valor de um cateto:");
scanf("%f", &catetoA);
printf("Valor do outro cateto:");
scanf("%f", &catetoB);
hipotenusa = sqrt(catetoA*catetoA + catetoB*catetoB);
printf("A hipotenusa corresponde a: %f", hipotenusa);
return 0;
}
