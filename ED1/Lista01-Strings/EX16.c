#include <stdio.h>

/*Escreva um programa para converter uma cadeia de caracteres de letras maiúsculas em
letras minúsculas.*/

int main(){
	char str[100];

	fgets(str, 100, stdin);

	for(int i = 0; str[i] != '\0'; i++){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] += 32;
		}
	}

	printf("%s", str);

	return 0;
}