#include <stdio.h>
int main() {
int numeroA;
int numeroB;
int conta;
printf("Digite o valor de a:");
scanf("%d", &numeroA);
printf("Digite o valor de b:");
scanf("%d", &numeroB);
conta = (numeroB*numeroB*numeroB + numeroA*numeroB) - 2*numeroB + (numeroA % numeroB);
printf("f(x): %d", conta);
return 0;
}