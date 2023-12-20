#include <stdio.h>
#include <stdlib.h>

void converte(int *notas){
    int cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0;

    if(*notas >= 100){
        cem = (*notas / 100);
        *notas = *notas % 100;
    }
    if(*notas >= 50){
        cinquenta = (*notas / 50);
        *notas = *notas % 50;
    }
    if(*notas >= 20){
        vinte = (*notas / 20);
        *notas = *notas % 20;
    }
    if(*notas >= 10){
        dez = (*notas / 10);
        *notas = *notas % 10;
    }
    if(*notas >= 5){
        cinco = (*notas / 5);
        *notas = *notas % 5;
    }
    if(*notas >= 2){
        dois = (*notas / 2);
        *notas = *notas % 2;
    }
    if(*notas >= 1){
        um = (*notas / 1);
        *notas = *notas % 1;
    }

    printf("%d notas de cem!\n", cem);
    printf("%d notas de cinquenta!\n", cinquenta);
    printf("%d notas de vinte!\n", vinte);
    printf("%d notas de dez!\n", dez);
    printf("%d notas de cinco!\n", cinco);
    printf("%d notas de dois!\n", dois);
    printf("%d moedas de um!\n", um);
}

int main(){

    int notas;

    printf("Digite o valor em reais: ");
    scanf("%d", &notas);

    converte(&notas);

    return 0;
}