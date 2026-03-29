#include <stdio.h>

/*O codigo de César é uma das mais simples e conhecidas técnicas de criptografia. É um
tipo de substituição na qual cada letra do texto é substituída por outra, que se apresenta
no alfabeto abaixo dela um numero fixo de vezes. Por exemplo, com uma troca de três
posições, ‘A’ seria substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante.
Implemente um programa que faça uso desse Código de César (3 posições), entre com
uma string e retorne a string codificada. Exemplo:
String: a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R
FDFKRUUR FDQVDGR*/

int main() {
    char s[200];

    fgets(s, 200, stdin);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = ((s[i] - 'a' + 3) % 26) + 'A';
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = ((s[i] - 'A' + 3) % 26) + 'A';
    }

    printf("%s", s);
}