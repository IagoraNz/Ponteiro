#include <stdio.h>
#include <stdlib.h>

void preencher(int *vet, int tam) {
    int i;
    printf("\n");
    for (i = 0; i < tam; i++) {
        printf("Vetor[%d]: ", i);
        scanf("%d", &vet[i]);
    }
}

void exibir(int *vet, int tam) {
    int i;
    
    for (i = 0; i < tam; i++) {
        printf("%d ", vet[i]);
    }
}

int* concatena(int *v, int *v2, int tam, int tam2, int *tam3) {

    int i, j;

    *tam3 = tam + tam2;

    int *vet3 = (int *)malloc((*tam3) * sizeof(int));

    for(i = 0; i < tam; i++){
        vet3[i] = v[i];
    }

    int k = tam;

    int existe = 0;

    for(i = 0; i < tam2; i++){
        existe = 0;
        for(j = 0; j < tam; j++){
            if(v2[i] == v[j]){
                existe = 1;
                break;
            }
        }
        if(existe == 0){
            vet3[k++] = v2[i];
        }
        if(existe){
            *tam3 = *tam3 - 1;
        }
    }

    printf("\nVetor 3: ");
    for(i = 0; i < *tam3; i++){
        printf("%d ", vet3[i]);
    }

    return vet3;
}

int main() {
    int tam, tam2, tam3 = 0;

    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &tam);

    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d", &tam2);

    int *vet1 = (int *)malloc(tam * sizeof(int));
    preencher(vet1, tam);
    printf("\nVetor 1: ");
    exibir(vet1, tam);

    int *vet2 = (int *)malloc(tam2 * sizeof(int));
    preencher(vet2, tam2);
    printf("\nVetor 2: ");
    exibir(vet2, tam2);

    int *vet3 = concatena(vet1, vet2, tam, tam2, &tam3);

    printf("\nO tamanho do vetor 3: %d", tam3);

    free(vet1);
    free(vet2);
    free(vet3);

    return 0;
}
