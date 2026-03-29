#include <stdio.h>

//2. Crie um programa que calcula o comprimento de uma string (não use a função strlen)

int main(){
	char string[100];
	int tamanho = 0;

	printf("Digite uma string: \n");
	scanf("%s", string);

	while (string[tamanho] != '\0'){
		tamanho ++;
	}

	printf("O tamanho da String é: %d", tamanho);

	return 0;
}