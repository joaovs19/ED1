#include <stdio.h>
#include "bib.h"

int main(){
	int opcao;
	int n, base, exp;

	do{
		printf("\n===== MENU =====\n");
		printf("1 - Fatorial\n");
		printf("2 - Potência\n");
		printf("3 - Soma Fibonacci\n");
		printf("4 - Média de altura\n");
		printf("0 - Sair\n");
		printf("Escolha uma opção: ");
		scanf("%d", &opcao);

		switch(opcao){
		    case 1:
		    	printf("Digite um número: ");
		    	scanf("%d", &n);
		    	printf("Fatorial: %d\n", Fatorial(n));
		    	break;

		    case 2:
		    	printf("Digite base e expoente: ");
		    	scanf("%d %d", &base, &exp);
		    	printf("Potência: %d\n", Potencia(base, exp));
		    	break;

		    case 3: 
		    	printf("Digite a quantidade de termos: ");
		    	scanf("%d", &n);
		    	printf("Soma Fibonacci: %d\n", SomaFibonacci(n));
		    	break;

		    case 4:
		    	printf("Digite a quantidade de alturas: ");
		    	scanf("%d", &n);
		    	printf("Média das alturas: %.2f\n", MediaAltura(n));
		    	break;

		    case 0:
		    	printf("Saindo...\n");
		    	break;
		}
	} while(opcao != 0);

	return 0;
}		