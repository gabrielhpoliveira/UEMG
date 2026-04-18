#include <stdio.h>

int main() {
    int A = 0, B = 0;
    int num = 0, digito = 0, prodDigitos = 0, temp = 0;

    printf("Digite A: ");
    scanf("%d", &A);
    printf("Digite B (deve ser maior que A): ");
    scanf("%d", &B);

    if (A >= B) {
        printf("Erro: A deve ser menor que B.\n");
        return 1;
    }

    for (num = A; num <= B; num++) {

        if ((num % 2 == 0 || num % 7 == 0) && !(num % 2 == 0 && num % 7 == 0)) {

            temp = num;
            prodDigitos = 1;

            if (temp < 0) temp = -temp;

            while (temp > 0) {
                digito = temp % 10;
                prodDigitos *= digito;
                temp /= 10;
            }

            if (prodDigitos % 2 != 0) {
                printf("%d\n", num);
            }
        }
    }

    return 0;
}