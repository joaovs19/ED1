#include <stdio.h>

/*Leia uma cadeia de caracteres no formato “DD/MM/AAAA” e copie o dia, mês e ano
para 3 variáveis inteiras. Antes disso, verifique se as barras estão no lugar certo, e se
DD, MM e AAAA são numéricos. */

int main(){
    char data[11];
    int d,m,a;

    fgets(data,11,stdin);

    if(data[2]=='/' && data[5]=='/'){
        d = (data[0]-'0')*10 + (data[1]-'0');
        m = (data[3]-'0')*10 + (data[4]-'0');
        a = (data[6]-'0')*1000 + (data[7]-'0')*100 + (data[8]-'0')*10 + (data[9]-'0');

        printf("%d %d %d\n",d,m,a);
    } else {
        printf("Formato invalido\n");
    }
}