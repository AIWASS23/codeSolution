#include <stdio.h>

int main() {
    int numeros[4];
    int i;

    for (i = 0; i < 4; i++) {
        scanf("%d", &numeros[i]);
    }

    if ((numeros[0] == numeros[2]) || (numeros[1] == numeros[3])) {
        printf("V\n"); 
    } else {
        printf("F\n");
    }

    return 0;
}