#include <stdio.h>

int main(){

    int x, *p, **q;

    p = &x; //p recebe o endereço de x na forma de ponteiro
    q = &p; //q recebe o endereço de p
    x = 10; 

    printf("%d\n", **q); //imprime o valor de x alojado no endereço de q

    return 0;
}