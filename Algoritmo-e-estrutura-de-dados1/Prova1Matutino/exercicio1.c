#include <stdio.h>

int main() {
    int total, anos, meses, semanas, dias, horas, minutos, segundos;

    printf("Digite o total de segundos: ");
    scanf("%d", &total);

    anos = total / 31536000;
    total = total % 31536000;

    meses = total / 2592000;
    total = total % 2592000;

    semanas = total / 604800;
    total = total % 604800;

    dias = total / 86400;
    total = total % 86400;

    horas = total / 3600;
    total = total % 3600;

    minutos = total / 60;
    segundos = total % 60;

    if (anos > 0)
        printf("%d Ano(s)\n", anos);
    if (meses > 0)
        printf("%d Mes(es)\n", meses);
    if (semanas > 0)
        printf("%d Semana(s)\n", semanas);
    if (dias > 0)
        printf("%d Dia(s)\n", dias);
    if (horas > 0)
        printf("%d Hora(s)\n", horas);
    if (minutos > 0)
        printf("%d Minuto(s)\n", minutos);
    if (segundos > 0)
        printf("%d Segundo(s)\n", segundos);

    return 0;
}
