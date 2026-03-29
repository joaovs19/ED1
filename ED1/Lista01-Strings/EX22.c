#include <stdio.h>

/*Ler o nome e o valor de uma determinada mercadoria de uma loja. Sabendo que o
desconto para pagamento à vista é de 10% sobre o valor total, calcular o valor a ser
pago à vista. Escrever o nome da mercadoria, o valor total, o valor do desconto e o valor
a ser pago à vista.*/

int main(){
	char nome[50];
	float valor, desconto, final;

	fgets(nome, 50, stdin);
	scanf("%f", &valor);

	desconto = valor * 0.10;
	final = valor - desconto;

	printf("Produto: %s\n", nome);
	printf("Total: %.2f\n", valor);
	printf("Desconto: %.2f\n", desconto);
	printf("Final: %.2f\n", final);

	return 0;
}