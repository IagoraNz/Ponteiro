#include <stdio.h>

int main(){

    int vet[] = {4, 9, 12}; //vetor de inteiros

    int i, *ptr; //ponteiro para inteiro

    ptr = vet; //se usasse &vet, estaria pegando o endereço do vetor, não o endereço do primeiro elemento do vetor

    for(i = 0; i < 3; i++){
        printf("%d ", *ptr++); //imprime o valor do ponteiro e incrementa
    }

    return 0;
}