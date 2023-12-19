#include <stdio.h>

#define tam 50

void vogal(char *vet){

    int t = 0, i, cont = 0;

    while(vet[t] != '\0'){
        t++;
    }

    char *p = vet;

    for(i = 0; i < t; i++){
        if(*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u'){
            cont++;
        }
        p++;
    }
    printf("A quantidade de vogais na palavra %s: %d", vet, cont);
}

int main(){

    char vet[tam];

    printf("Digite uma palavra: ");
    scanf("%s", vet);

    vogal(vet);

    return 0;
}