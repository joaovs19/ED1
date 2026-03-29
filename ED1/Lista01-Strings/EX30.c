#include <stdio.h>

/*Leia duas cadeias de caracteres A e B. Determine quantas vezes a cadeia A ocorre na
cadeia B.*/

int main() {
    char A[50], B[100];
    int cont = 0;

    fgets(A,50,stdin);
    fgets(B,100,stdin);

    for(int i=0;B[i]!='\0';i++){
        int j=0;
        while(A[j]!='\0' && B[i+j]==A[j]){
            j++;
        }
        if(A[j]=='\0') cont++;
    }

    printf("%d\n",cont);
}