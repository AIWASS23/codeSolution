#include <stdio.h>
#include <stdlib.h>

int partition(int *x, int low, int high) {
    int pivot = x[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (x[j] < pivot) {
            i++;
            int temp = x[i];
            x[i] = x[j];
            x[j] = temp;
        }
    }
    int temp = x[i + 1];
    x[i + 1] = x[high];
    x[high] = temp;
    return i + 1;
}

void quicksort(int *x, int low, int high) {
    if (low < high) {
        int pi = partition(x, low, high);
        quicksort(x, low, pi - 1);
        quicksort(x, pi + 1, high);
    }
}

int main() {
    int x[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &x[i]);
    }

    quicksort(x, 0, 4);

    if (x[1] * x[4] == x[2] * x[3]) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}
