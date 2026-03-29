#include <stdio.h>

/*Construa um programa que leia duas strings fornecidas pelo usuário e verifique se a
segunda string lida esta contida no final da primeira, retornando o resultado da
verificação.*/

int main() {
    char a[100], b[100];
    int ta=0, tb=0;

    fgets(a,100,stdin);
    fgets(b,100,stdin);

    while(a[ta]!='\0') ta++;
    while(b[tb]!='\0') tb++;

    int ok=1;

    for(int i=0;i<tb-1;i++){
        if(a[ta-tb+i]!=b[i]){
            ok=0;
            break;
        }
    }

    if(ok) printf("Contido\n");
    else printf("Nao contido\n");
}