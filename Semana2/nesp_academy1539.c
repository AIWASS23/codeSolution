#include <stdio.h>

int main() {
    int c = 0;

    for (int i = 0; i < 8; i++) {
        double x;

        scanf("%lf", &x);

        if (x > 1.8)
            c++;
    }

    printf("%d jogadores encontrados\n", c);

    return 0;
}
