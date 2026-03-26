#include <stdio.h>
int main (){
int diasDeServico;
float imposto;
float valorTotal;
float valorTotalLiquido;
printf("Qual a quantidade de dias trabalhados?:");
scanf("%d", &diasDeServico);
valorTotal = diasDeServico*30;
imposto = valorTotal/100*8;
valorTotalLiquido = valorTotal - imposto;
printf("O valor a ser recebido eh: %f", valorTotalLiquido);
return 0;
}