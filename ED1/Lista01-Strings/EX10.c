#include <stdio.h>

/*10.Faça um programa que receba uma palavra e a imprima de trás-para-frente.*/

int main(){
	char str[100];
	int i = 0;

	fgets(str, 100, stdin);

	while(str[i] != '\0') i++;

	for(int j = i -2; j >= 0; j--){
		printf("%c", str[j]);
	}

	return 0;
}