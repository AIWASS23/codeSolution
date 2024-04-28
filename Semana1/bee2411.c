#include <stdio.h>
#include <stdbool.h>

int main() {

    int horizontal = 4;
    int vertical = 3;
    int resposta = 0;
    bool possivel = true;
    int movimento;
    scanf("%d", &movimento);

    for (int i = 0; i < movimento; i++) {
        int m;
        scanf("%d", &m);

        if (!possivel) {
            continue;
        }
        if (m == 1) {
            horizontal += 1;
            vertical += 2;
        } else if (m == 2) {
            horizontal += 2;
            vertical += 1;
        } else if (m == 3) {
            horizontal += 2;
            vertical -= 1;
        } else if (m == 4) {
            horizontal += 1;
            vertical -= 2;
        } else if (m == 5) {
            horizontal -= 1;
            vertical -= 2;
        } else if (m == 6) {
            horizontal -= 2;
            vertical -= 1;
        } else if (m == 7) {
            horizontal -= 2;
            vertical += 1;
        } else {
            horizontal -= 1;
            vertical += 2;
        }
        if ((horizontal == 1 && vertical == 3) || (horizontal == 2 && vertical == 3) || (horizontal == 2 && vertical == 5) || (horizontal == 5 && vertical == 4)) {
            possivel = false;
        }
        resposta++;
    }
    printf("%d\n", resposta);
    return 0;
}