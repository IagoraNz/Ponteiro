#include <stdio.h>

#define tam 50

void invertestring(char *vet){
    int t = 0, i;

    while(vet[t] != '\0'){
        t++;
    }

    char *p = vet + t - 1; //O último elemento já estará na posição correta

    printf("String invertida: ");
    for(i = t - 1; i >= 0; i--){//tamanho da string menos o último até percorrer todos os espaços
        printf("%c", *p--); //Decrementa também o ponteiro
    }
}

int main(){

    char str[tam];

    printf("Digite a palavra para ser invertida: ");
    scanf("%s", str);

    invertestring(str);
    
    return 0;
}
