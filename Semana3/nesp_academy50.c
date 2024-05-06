#include <stdio.h>

int main() {
    int valor_a, valor_b, valor_c, valor_d;
    scanf("%d %d %d %d", &valor_a, &valor_b, &valor_c, &valor_d);

    int condicao1 = valor_a == valor_b + valor_c + valor_d;
    int condicao2 = valor_d == valor_b + valor_c;
    int condicao3 = valor_b == valor_c;

    if (condicao1 && condicao2 && condicao3) {
        printf("S");
    } else {
        printf("N");
    }

    printf("\n");

    return 0;
}
