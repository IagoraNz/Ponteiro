#include <stdio.h>
#include <stdlib.h>

void preencher(int *vet, int tam){
    int i;

    for(i = 0; i < tam; i++){
        printf("Vetor[%d]: ", i);
        scanf("%d", &*(vet + i));
    }
}

void exibir(int *vet, int tam){
    int i;

    for(i = 0; i < tam; i++){
        printf("%d ", *(vet + i));
    } 
}

void media(int *vet, int tam){
    int i, soma = 0;

    for(i = 0; i < tam; i++){
        soma += *(vet + i);
    }

    float media = soma / tam;

    for(i = 0; i < tam; i++){
        if(*(vet + i) > media){
            *(vet + i) = 0;
        }
    }
    printf("\nNovo vetor: ");
    exibir(vet, tam);
}

int main(){

    int tam;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    int *vet = (int *)malloc(tam * sizeof(int));

    preencher(vet, tam);
    printf("\nVetor: ");
    exibir(vet, tam);

    media(vet, tam);

    return 0;
}