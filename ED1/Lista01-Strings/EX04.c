#include <stdio.h>

//Faça um programa que leia um nome e imprima as 4 primeiras letras do nome

int main(){
	char nome[100];

	printf("Digite um nome: \n");
	fgets(nome, 100, stdin);

	for(int i = 0; i < 4 && nome[i] != '\0'; i++){
		printf("%c", nome[i]);
	}

	return 0;
}