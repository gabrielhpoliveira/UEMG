#include <stdio.h>

int main() {
    char sexo;
    float idade, peso, altura, TBM = 0;

    printf("Digite seu sexo:");
    scanf(" %c", &sexo);
    printf("Digite sua idade:");
    scanf("%f", &idade);
    printf("Digite sua altura em centimetros:");
    scanf("%f", &altura);
    printf("Digite seu peso em kilos:");
    scanf("%f", &peso);

    if (sexo == 'M') {
        TBM = 88.36 + (13.4 * peso) + (4.8 * altura) - (5.7 * idade);
    } else if (sexo == 'F') {
        TBM = 447.6 + (9.2 * peso) + (3.1 * altura) - (4.3 * idade);
    }

    if (idade <= 25) {
        printf("O seu TBM eh %f e seu metabolismo eh acelerado", TBM);
    } else if (idade <= 45) {
        printf("O seu TBM eh %f e seu metabolismo eh normal", TBM);
    } else if (idade <= 60) {
        printf("O seu TBM eh %f e seu metabolismo eh moderado", TBM);
    } else {
        printf("O seu TBM eh %f e seu metabolismo eh lento", TBM);
    }

    return 0;
}