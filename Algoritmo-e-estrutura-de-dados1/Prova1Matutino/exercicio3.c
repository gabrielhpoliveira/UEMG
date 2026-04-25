#include <stdio.h>

int main() {
    int n, i, anterior, atual, proximo;

    printf("Digite a quantidade de dias (N): ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Nenhum dado para monitorar\n");
        return 0;
    }

    if (n == 1) {
        printf("0\n");
        return 0;
    }

    anterior = 0;
    atual = 1;

    printf("%d, %d", anterior, atual);

    for (i = 3; i <= n; i++) {
        proximo = anterior + atual;
        printf(", %d", proximo);
        anterior = atual;
        atual = proximo;
    }

    printf("\n");

    return 0;
}
