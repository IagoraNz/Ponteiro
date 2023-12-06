#include <stdio.h>
#include <stdlib.h>

#define tam 50

void remover(char *str, char carac){
    int t = 0, i;

    while(str[t] != '\0'){
        t++;
    }

    char *p = str;

    for(i = 0; i < t; i++){
        if(*p == carac){//Se o índice da string for igual ao caractere que se deseja remover
            *p = ' ';//Troca por um espaço vazio
        }
        p++;//Passa para o próximo caractere da string utilizando ponteiro
    }
    printf("A string com o caractere %c removido: %s", carac, str);
}

int main(){

    char str[tam], carac;

    printf("Digite uma palavra: ");
    scanf("%s", str);

    printf("Digite qual caractere deseja remover: ");
    scanf(" %c", &carac);

    remover(str, carac);

    return 0;
}