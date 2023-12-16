#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher(int *vet, int tam){
    int i;

    srand(time(NULL));

    for(i = 0; i < tam; i++){
        *(vet + i) = rand() % 100;
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
    printf("Vetor: ");
    exibir(vet, tam);
    printf("\n");
    
    printf("\nDigite o novo tamanho do vetor: ");
    scanf("%d", &tam);

    vet = (int *)realloc(vet, tam * sizeof(int));

    preencher(vet, tam);
    printf("Vetor realocado: ");
    exibir(vet, tam);
    printf("\n");

    return 0;
}