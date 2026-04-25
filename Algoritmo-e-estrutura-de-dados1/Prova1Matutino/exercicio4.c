#include <stdio.h>

int main() {
    int idade, total = 0, mulheres = 0, filtro = 0;
    int maior = -1, menor = 999;
    char sexo;
    float salario, somaSalario = 0;

    do {
        printf("Digite a idade (negativo para sair): ");
        scanf("%d", &idade);

        if (idade < 0)
            break;

        if (idade < 18) {
            printf("Idade nao permitida. Minimo 18 anos.\n");
            continue;
        }

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Digite o salario: ");
        scanf("%f", &salario);

        total++;
        somaSalario = somaSalario + salario;

        if (idade > maior)
            maior = idade;
        if (idade < menor)
            menor = idade;

        if (salario > 5000.00 && idade < 30)
            filtro++;

        if (sexo == 'F' || sexo == 'f')
            mulheres++;

    } while (1);

    if (total > 0) {
        printf("\nMedia salarial: R$ %.2f\n", somaSalario / total);
        printf("Maior idade: %d\n", maior);
        printf("Menor idade: %d\n", menor);
        printf("Funcionarios com salario > 5000 e idade < 30: %d\n", filtro);
        printf("Percentual de mulheres: %.2f%%\n", (mulheres * 100.0) / total);
    } else {
        printf("Nenhum funcionario cadastrado.\n");
    }

    return 0;
}