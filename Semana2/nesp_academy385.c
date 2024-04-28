#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define ANTERIOR(i) (lados[i] < (lados[i - 1] + lados[i - 2]))

int compare(const void *a, const void *b) {
    return (*(unsigned short*)a - *(unsigned short*)b);
}

int main() {
    unsigned short lados[4];
    for (int i = 0; i < 4; i++) {
        scanf("%hu", &lados[i]);
    }

    qsort(lados, 4, sizeof(unsigned short), compare);

    if (ANTERIOR(2) || ANTERIOR(3))
        printf("S\n");
    else
        printf("N\n");
    
    return 0;
}
