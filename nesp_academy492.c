#include <stdio.h>

#define SIZE 105

short sinuca(short original[], short size) {
    short index;
    for (index = 0; index < size - 1; index++) {
        if (original[index] == original[index + 1])
            original[index] = 1;
        else
            original[index] = -1;
    }

    if (size == 1)
        return original[0];
    return sinuca(original, size - 1);
}

int main() {
    short size;
    scanf("%hd", &size);
    short balls[SIZE];

    for (int index = 0; index < size; index++) {
        scanf("%hd", &balls[index]);
    }

    if (sinuca(balls, size) == 1) {
        printf("preta\n");
    } else {
        printf("branca\n");
    }
    return 0;
}
