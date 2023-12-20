#include <stdio.h>
#include <stdlib.h>

void preencher(int *vet, int tam);
void exibir(int *vet, int tam);
void inverter(int *vet, int tam);

int main(){

    int tam;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    int *vet = (int *)malloc(tam * sizeof(int));

    preencher(vet, tam);
    printf("\nVetor: ");
    exibir(vet, tam);

    inverter(vet, tam);

    return 0;
}

void preencher(int *vet, int tam){
    int i;

    for(i = 0; i < tam; i++){
        printf("Vetor[%d]: ", i);
        scanf("%d", &vet[i]);
    }
}

void exibir(int *vet, int tam){
    int i;

    for(i = 0; i < tam; i++){
        printf("%d ", vet[i]);
    }
}

void inverter(int *vet, int tam){
    int i;

    printf("\nVetor invertido: ");
    for(i = tam - 1; i >= 0; i--){
        printf("%d ", vet[i]);
    }
}