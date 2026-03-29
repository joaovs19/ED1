#include <stdio.h>

/*Faça um programa que contenha um menu com as seguintes opções:
a. Ler uma string S1 (tamanho máximo 20 caracteres);
b. Imprimir o tamanho da string S1;
c. Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir
o resultado da comparação;
d. Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da
concatenação;
e. Imprimir a string S1 de forma reversa;
f. Contar quantas vezes um dado caractere aparece na string S1. Esse caractere
desse ser informado pelo usuário;
g. Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2.
Os caracteres C1 e C2 serão lidos pelo usuário;
h. Verificar se uma string S2 e substring de S1. A string S2 deve ser informada
pelo usuário;
i. Retornar uma substring da string S1. Para isso o usuário deve informar a partir
de qual posição deve ser criada a substring e qual é o tamanho da substring.*/

int main(){
    char s1[50], s2[50];
    int op;

    do{
        printf("\n1-Ler\n2-Tamanho\n3-Comparar\n0-Sair\n");
        scanf("%d",&op);
        getchar();

        if(op==1){
            fgets(s1,50,stdin);
        }
        else if(op==2){
            int i=0;
            while(s1[i]!='\0') i++;
            printf("%d\n",i-1);
        }
        else if(op==3){
            fgets(s2,50,stdin);
            int i=0,ok=1;
            while(s1[i]||s2[i]){
                if(s1[i]!=s2[i]) ok=0;
                i++;
            }
            printf(ok?"Igual\n":"Diferente\n");
        }

    }while(op!=0);
}