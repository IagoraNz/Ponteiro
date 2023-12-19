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

int main(){

    int tam;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    int *vet = (int *)malloc(tam * sizeof(int));

    preencher(vet, tam);
    printf("\nVetor: ");
    exibir(vet, tam);

    printf("\nDigite o novo tamanho do vetor: ");
    scanf("%d", &tam);

    vet = (int *)realloc(vet, tam * sizeof(int));

    preencher(vet, tam);
    printf("\nVetor realocado: ");
    exibir(vet, tam);

    return 0;
}