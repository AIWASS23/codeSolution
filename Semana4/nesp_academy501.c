#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;
    scanf("%d", &numero);
    
    int estrada[numero][2];

    for (int x = 0; x < numero; x++) {
        scanf("%d %d", &estrada[x][0], &estrada[x][1]);
    }

    for (int x = 1; x <= numero; x++) {
        int saida = 0;
        int chegada = 0;
        for (int y = 0; y < numero; y++) {
            if (estrada[y][0] == x) {
                saida = 1;
            }
            if (estrada[y][1] == x) {
                chegada = 1;
            }
            if (saida && chegada) {
                break;
            }
        }
        if (!(saida && chegada)) {
            printf("N\n");
            exit(0);
        }
    }

    printf("S\n");

    return 0;
}
