#include <stdio.h>

//1. Faça um programa que então leia uma string e a imprima.

int main(){
	char nome[50];

	printf("Digite seu nome: \n");
	scanf("%s", nome);

	printf("Seu nome é %s", nome);

	return 0;
}