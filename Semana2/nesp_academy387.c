#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int F, R;
    scanf("%d %d", &F, &R);

    int *sementes = (int *)malloc(R * sizeof(int));

    for (int i = 0; i < R; ++i) {
        scanf("%d", &sementes[i]);
    }
    qsort(sementes, R, sizeof(int), compare);
    
    int ante = 0;
    int res = 0;

    for (int i = 0; i < R; ++i) {
        int semente = sementes[i];
        
        if (ante == 0) {
            res = (res > semente - 1) ? res : semente - 1;
        } else {
            res = (res > (semente - ante) / 2) ? res : (semente - ante) / 2;
        }
        ante = semente;
    }
    res = (res > F - ante) ? res : F - ante;
    printf("%d\n", res);

    free(sementes);
    return 0;
}
