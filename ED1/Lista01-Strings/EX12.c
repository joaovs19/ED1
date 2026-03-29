#include <stdio.h>

/*Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui
essa palavra. Entre com um caractere (vogal ou consoante) e substitua todas as vogais
da palavra dada por esse caractere.*/

int main(){
	char str[100], sub;
	int cont = 0;

	fgets(str, 100, stdin);

	printf("Digite caractere: ");
	scanf("%c", &sub);

	for(int i = 0; str[i] != '\0'; i++){
		char c = str[i];

		if(!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')){
			cont++;
			str[i] = sub;
		}
	}

	printf("Vogais: %d\n", cont);
	printf("Nova string: %s", str);

	return 0;
}