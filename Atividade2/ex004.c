#include <stdio.h>

int main() {
    int n1, n2 = 0;
    int multiplicacao, adicao = 0;
    float divisao, subtracao = 0;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);
    multiplicacao = n1 * n2;
    adicao = multiplicacao + n1;
    divisao = (float)adicao / n2;
    subtracao = divisao - n2;
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Soma: %d\n", adicao);
    printf("Divisao: %f\n", divisao);
    printf("Subtracao: %f\n", subtracao);

    return 0;
}