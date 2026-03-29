#include <stdio.h>

/*Escreva um programa que substitui as ocorrências de um caractere 0 em uma string por
outro caractere 1. */

int main(){
	char str[100];

	fgets(str, 100, stdin);

	for(int i = 0; str[i] != '\0'; i++){
		if(str[i] == '0')
		   str[i] = '1';
	}

	printf("%s\n", str);

	return 0;
}