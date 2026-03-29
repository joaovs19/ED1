#include <stdio.h>

/*Faça um programa que receba do usuário uma string. O programa imprime a string sem
suas vogais.*/

int main(){
	char str[100];

	fgets(str, 100, stdin);

	for(int i = 0; str[i] != '\0'; i++){
		char c = str[i];

		if(!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')){
			printf("%c", c);
		}
	}

	return 0;
}