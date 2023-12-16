#include <stdio.h>
#include <stdlib.h>

void verificaTamanho(int tam1, int tam2){
    if(tam1 != tam2){
        printf("Os vetores possuem tamanho diferente\n");
    }
    else{
        printf("Os vetores possuem tamanho igual\n");
    }
}

void preencher(int *vet, int tam){
    int i;

    for(i = 0; i < tam; i++){
        printf("Vetor [%d]: ", i);
        scanf("%d", &*(vet + i));
    }
}

void verificarComum(int *vet1, int *vet2, int tam1, int tam2){
    int i, j, cont = 0;

    for(i = 0; i < tam1; i++){
        for(j = 0; j < tam2; j++){
            if(*(vet1 + i) == *(vet2 + j)){
                cont++;
            }
        }
    }

    printf("Os vetores possuem %d valores em comum: ", cont);
}

void soma(int *vet1, int *vet2, int tam1, int tam2){
    int i, soma = 0, soma1 = 0;

    for(i = 0; i < tam1; i++){
        soma += *(vet1 + i);
    }

    for(i = 0; i < tam2; i++){
        soma1 += *(vet2 + i);
    }

    if(soma == soma1){
        printf("\nOs vetores possuem a mesma soma");
    }
    else{
        printf("\nOs vetores nao possuem a mesma soma");
    }
}

void exibir(int *vet, int tam){
    int i;

    for(i = 0; i < tam; i++){
        printf("%d ", *(vet + i));
    }
}

int main(){

    int tam1, tam2;

    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &tam1);

    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d", &tam2);

    verificaTamanho(tam1, tam2);

    int *vet1 = (int *)malloc(tam1 * sizeof(int));
    int *vet2 = (int *)malloc(tam2 * sizeof(int));

    preencher(vet1, tam1);
    printf("\nVetor 1: ");
    exibir(vet1, tam1);
    printf("\n");

    preencher(vet2, tam2);
    printf("\nVetor 2: ");
    exibir(vet2, tam2);
    printf("\n");

    verificarComum(vet1, vet2, tam1, tam2);

    soma(vet1, vet2, tam1, tam2);

    free(vet1);
    free(vet2);

    return 0;
}