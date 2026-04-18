#include <stdio.h>

int main() {
    int n = 0;
    int i = 0, d = 0;
    int contDivisores = 0;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        contDivisores = 0;

        for (d = 1; d <= i; d++) {
            if (i % d == 0) {
                contDivisores++;
            }
        }

        if (contDivisores == 2) {
            printf("*** %d (PRIMO) - Divisores: ", i);
        } else {
            printf("    %d - Divisores: ", i);
        }

        for (d = 1; d <= i; d++) {
            if (i % d == 0) {
                printf("%d ", d);
            }
        }

        printf("\n");
    }

    return 0;
}