#include <stdio.h>

int main() {
    int i = 0;
    long long resultado = 1;

    for (i = 2; i < 2000; i += 2) {
        if (i % 4 == 0 || i % 6 == 0) {
            resultado *= i;
        }
    }

    printf("Resultado da multiplicacao: %lld\n", resultado);

    return 0;
}