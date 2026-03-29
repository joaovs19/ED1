#include <stdio.h>

/*Faça um programa que, dada uma string, diga se ela e um palíndromo ou não.
Lembrando que um palíndromo e uma palavra que tenha a propriedade de poder ser lida
tanto da direita para a esquerda como da esquerda para a direita. Exemplo: ovo arara
Socorram-me, subi no ônibus em Marrocos. Anotaram a data da maratona.*/

int main() {
    char s[100];
    int i = 0, j;

    fgets(s, 100, stdin);

    while (s[i] != '\0') i++;
    j = i - 2;

    int ok = 1;

    for (int k = 0; k < j; k++, j--) {
        if (s[k] != s[j]) {
            ok = 0;
            break;
        }
    }

    if (ok) printf("Palindromo\n");
    else printf("Nao é\n");
}