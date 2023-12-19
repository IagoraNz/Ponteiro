#include <stdio.h>

int main(){
    
    int x = 9;

    int *ptr = &x; //O ponteiro recebe o endereço de X

    *ptr = 10; //Com o endereço, o *ptr manipula o valor de X

    printf("%d", x); //Logo, quando printar o X ele aparecerá 10

    return 0;
}
