#include <stdio.h>

int main () {
	int valor = 0;
	int maior = 0;
	int menor = 0;
	float media = 0;
	int total = 0;
	int qtd = 10;
	int i = 0;
	int maior2 = 0;
	int menor2 =0;
	int par=0;
	int impar = 0;
	
	for (i=0;i<qtd;i++) {
		printf("Escreva o i valor:");
		scanf("%d", &valor);
		total += valor;
		if(valor>maior){
            maior2 = maior;
			maior = valor;
		}
        else if(valor > maior2){
            maior2 = valor;
        }
		if(i==0){
            menor = valor;
		}
        else if(valor < menor){
            menor2 = menor;
            menor = valor;
        }
        else if(valor<menor2 || i == 1){
            menor2 = valor;
        }
		if(valor % 2 == 0){
			par++;
		} else {
			impar++;
		}

	}
	media = total/qtd;
	printf("O valor final eh : %d \n", total);
	printf("O valor menor eh : %d \n", menor);
	printf("O valor maior eh : %d \n", maior);
	printf("A media eh %f \n", media);
	printf("par eh: %d \n", par);
	printf("impar eh: %d \n", impar);
    printf("O 2 maior eh: %d \n", maior2);
	printf("O 2 menor eh: %d", menor2);
	return 0;
}