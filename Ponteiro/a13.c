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

void copiarvetor(int *vet, int *vet2, int tam){
    int i;

    for(i = 0; i < tam; i++){
        *(vet2 + i) = *(vet + i);
    }
}

int main(){

    int tam;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    int *vet = (int *)malloc(tam * sizeof(int));
    int *vet2 = (int *)malloc(tam * sizeof(int));

    preencher(vet, tam);
    printf("Vetor 1: \n");
    exibir(vet, tam);

    copiarvetor(vet, vet2, tam);
    printf("\nVetor 2: \n");
    exibir(vet2, tam);

    return 0;
}