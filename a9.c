#include <stdio.h>

#define tam 50

void modificarstr(char *str, char *str2, char cantigo, char catual) {
    int t = 0, t1 = 0, i;

    while (str[t] != '\0') {
        t++;
    }

    while (str2[t1] != '\0') {
        t1++;
    }

    char *p = str;
    char *p2 = str2;

    for (i = 0; i < t; i++) {
        if (*p == cantigo) {
            *p = catual;
        }
        p++;
    }

    for (i = 0; i < t1; i++) {
        if (*p2 == cantigo) {
            *p2 = catual;
        }
        p2++;
    }

    printf("As novas strings sao: %s e %s\n", str, str2);
}

int main() {
    char str[tam], str2[tam], cantigo, catual;

    printf("Digite a primeira palavra: ");
    scanf("%s", str);

    printf("Digite a segunda palavra: ");
    scanf("%s", str2);

    printf("Digite o caractere original: ");
    scanf(" %c", &cantigo);

    printf("Digite o caractere novo: ");
    scanf(" %c", &catual);

    modificarstr(str, str2, cantigo, catual);

    return 0;
}