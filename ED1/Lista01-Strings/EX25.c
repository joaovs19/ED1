#include <stdio.h>

/*Escreva um programa que leia duas palavras e diga qual deles vem primeiro na ordem
alfabética. Dica: ‘a’ é menor do que ‘b’.*/

int main() {
    char a[50], b[50];
    int i = 0;

    fgets(a, 50, stdin);
    fgets(b, 50, stdin);

    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] < b[i]) {
            printf("A vem primeiro\n");
            return 0;
        }
        if (a[i] > b[i]) {
            printf("B vem primeiro\n");
            return 0;
        }
        i++;
    }
}