#include <stdio.h>

/*Escreva um programa que recebe do usuário uma string S, um caractere C, e uma
posição I e devolve o índice da primeira posição da string onde foi encontrado o
caractere C. A procura deve começar a partir da posição I.*/

int main(){
	char s[100], c;
	int i;

	fgets(s, 100, stdin);
	scanf("%c %d", &c, &i);

	for(int k = i; s[k] != '\0'; k++){
		if(s[k] == c){
			printf("Encontrado em %d\n", k);
			return 0;
		}
	}

	printf("Não Encontrado\n");
}