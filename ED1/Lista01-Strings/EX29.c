#include <stdio.h>

/*Implemente um programa que leia duas strings, str1 e str2, e um valor inteiro positivo
N. Concatene não mais que N caracteres da string str2 a string str1 e termine str1 com
NULL.*/

int main() {
    char s1[100], s2[100];
    int n, i, j;

    fgets(s1,100,stdin);
    fgets(s2,100,stdin);
    scanf("%d",&n);

    i=0;
    while(s1[i]!='\0') i++;

    for(j=0;j<n && s2[j]!='\0';j++){
        s1[i++] = s2[j];
    }

    s1[i]='\0';

    printf("%s",s1);
}