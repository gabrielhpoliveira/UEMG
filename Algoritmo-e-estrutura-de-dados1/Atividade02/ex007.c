#include <stdio.h>

int main() {
    int semana = 0, dia = 0, horas = 0;
    int totalSemana = 0, totalMes = 0, diasValidos = 0;
    int maiorHoras = -1, maiorSemana = 0, maiorDia = 0;
    int menorHoras = -1, menorSemana = 0, menorDia = 0;

    for (semana = 1; semana <= 4; semana++) {
        totalSemana = 0;
        diasValidos = 0;

        printf("\n--- Semana %d ---\n", semana);

        for (dia = 1; dia <= 7; dia++) {
            printf("Semana %d, Dia %d - horas (-1 para ausente): ", semana, dia);
            scanf("%d", &horas);

            if (horas == -1) {
                continue;
            }

            totalSemana += horas;
            diasValidos++;

            if (horas > maiorHoras) {
                maiorHoras = horas;
                maiorSemana = semana;
                maiorDia = dia;
            }

            if (horas > 0) {
                if (menorHoras == -1 || horas < menorHoras) {
                    menorHoras = horas;
                    menorSemana = semana;
                    menorDia = dia;
                }
            }
        }

        totalMes += totalSemana;

        printf("Total semana %d: %d horas\n", semana, totalSemana);

        if (diasValidos > 0) {
            printf("Media diaria semana %d: %.2f horas\n", semana, (float)totalSemana / diasValidos);
        } else {
            printf("Nenhum dia valido na semana %d.\n", semana);
        }
    }

    printf("\nTotal geral no mes: %d horas\n", totalMes);
    printf("Dia com MAIS horas: Semana %d, Dia %d (%d horas)\n", maiorSemana, maiorDia, maiorHoras);
    printf("Dia com MENOS horas: Semana %d, Dia %d (%d horas)\n", menorSemana, menorDia, menorHoras);

    return 0;
}