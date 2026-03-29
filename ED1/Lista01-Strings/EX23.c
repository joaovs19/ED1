#include <stdio.h>

/*Escreva um programa que recebe uma string S e inteiros não-negativos I e J e imprima
o segmento S[I..J].*/

int main(){
	char s[100];
	int i, j;

	fgets(s, 100, stdin);
	scanf("%d %d", &i, &j);

	for(int k = 1; k <= j && s[k] != '\0'; k++){
		printf("%c", s[k]);
	}

	return 0;
}