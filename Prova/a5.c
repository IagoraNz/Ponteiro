#include <stdio.h>

int main() {
    int i = 5;
    int *p = &i;
    printf("%d %d %d\n", *p + 2, *p, 5 + (*p * 8));
    return 0;
}
