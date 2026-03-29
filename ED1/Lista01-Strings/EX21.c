#include <stdio.h>

/*Faça um programa que receba duas frases distintas e imprima de maneira invertida,
trocando as letras A por *. */

int main(){
	char s1[100], s2[100];

	fgets(s1, 100, stdin);
	fgets(s2, 100, stdin);

	for(int i = 0; s1[i] != '\0'; i++);
		int tam1 = 0;
	while(s1[tam1] != '\0') tam1++;

	for(int i = tam1 - 2; i >= 0; i--){
		char c = s1[i];
		if(c == 'A' || c == 'a') c = '*';
		printf("%c", c);
	}

	printf("\n");

	int tam2 = 0;
	while(s2[tam2] != '\0') tam2++;

	for(int i = tam2 - 2; i >= 0; i--){
		char c = s2[i];
		if(c == 'A' || c == 'a') c = '*';
		printf("%c", c);
	}

	return 0;
}