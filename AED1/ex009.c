#include <stdio.h>
int main() {
int valorA;
int valorB;
int valorTemp;
printf("Digite o valor de a:");
scanf ("%d", &valorA);
printf("Digite o valor de b:");
scanf ("%d", &valorB);
valorTemp = valorA;
valorA = valorB;
valorB = valorTemp;
printf ("valor a eh %d e o do b eh %d", valorA, valorB);
return 0;
}