#include "bib.h"


int Fatorial(int n){
	int i, fat =1;
	for(i =1; i <= n; i++){
		fat *= i;
	}
	return fat;
}

int Potencia(int base, int exp){
	int i, resultado =1;
	for(i = 0; i < exp; i++){
		resultado *= base;
	}
	return resultado;
}

int SomaFibonacci(int ntermos){
	int i, a = 0, b = 1, prox, soma = 0;

	for(i = 0; i < ntermos; i++){
		soma += a;
		prox = a + b;
		a = b;
		b = prox;
	}
	return soma;
}

float MediaAltura(int n){
	float altura, soma = 0;
	int i;

	for(i = 0; i < n; i++){
		printf("Informe sua altura%d \n", i+1);
		scanf("%f", &altura);
		soma += altura;
	}
	return soma / n;
}