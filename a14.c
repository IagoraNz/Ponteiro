#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 50

int anagramas(char *str, char *stranag){

    int t = 0, i, t1 = 0, cont = 0;

    while(str[t] != '\0'){
        t++;
    }
    while(stranag[t1] != '\0'){
        t1++;
    }

    if(t != t1){
        return 0;
    } 

    for(i = 0; i < t; i++){
        if(strchr(str, stranag[i]) != 0){
            cont++;            
        }
    }

    if(cont == t1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    char palavra[tam], anagrama[tam];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("Digite um anagrama dessa palavra: ");
    scanf("%s", anagrama);

    if(anagramas(palavra, anagrama)){
        printf("A palavra %s: anagrama de %s!", anagrama, palavra);
    }
    else{
        printf("Nao e anagrama!");
    }

    return 0;
}