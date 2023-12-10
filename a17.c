#include <stdio.h>
#include <stdlib.h>

void buscarmaiormenor(int *vet, int tam){
    int i, maior = 0;

    for(i = 0; i < tam; i++){
        if(*(vet + i) > maior){
            maior = *(vet + i);
        }
    }

    int menor = vet[0];
    for(i = 0; i < tam; i++){
        if(*(vet + i) < menor){
            menor = *(vet + i);
        }
    }

    printf("\nO maior e menor numero do vetor: %d e %d", maior, menor);
}

void preencher(int *vet, int tam){
    int i;

    for(i = 0; i < tam; i++){
        printf("Vetor[%d]: ", i);
        scanf("%d", &*(vet + i));
    }
}

void exibir(int *vet, int tam){
    int i;

    printf("\nVetor: \n");
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
    exibir(vet, tam);
    buscarmaiormenor(vet, tam);

    return 0;
}