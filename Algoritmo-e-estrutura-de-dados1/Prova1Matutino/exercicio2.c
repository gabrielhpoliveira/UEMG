#include <stdio.h>

int main() {
    int tipo, n, i;
    float valor, saldo, lucro, taxa;

    printf("Tipo de investimento (1-Poupanca, 2-Renda Fixa, 3-Acoes): ");
    scanf("%d", &tipo);

    printf("Valor inicial: ");
    scanf("%f", &valor);

    printf("Quantidade de meses: ");
    scanf("%d", &n);

    if (tipo == 3 && valor <= 1000.00) {
        printf("Investimento Nao Permitido\n");
        return 0;
    }

    if (tipo == 1)
        taxa = 0.007;
    else if (tipo == 2)
        taxa = 0.012;
    else
        taxa = 0.02;

    saldo = valor;
    lucro = 0;

    for (i = 0; i < n; i++) {
        float rendimento = valor * taxa;
        if (tipo == 3) {
            rendimento = rendimento - 20.00;
        }
        lucro = lucro + rendimento;
        saldo = saldo + rendimento;
    }

    printf("Lucro obtido: R$ %.2f\n", lucro);
    printf("Saldo final: R$ %.2f\n", saldo);

    return 0;
}
