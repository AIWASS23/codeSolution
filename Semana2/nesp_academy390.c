#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, food = 0, max_food = 0; // Variável para armazenar o máximo de comida
    char tabu[105][105];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf(" %c", &tabu[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                if (tabu[i][j] == 'o') {
                    food++;
                    if (food > max_food) {
                        max_food = food; // Atualiza o máximo de comida encontrado
                    }
                }
                else if (tabu[i][j] == 'A') {
                    food = 0;
                }
            }
        }
        else {
            for (int j = n - 1; j >= 0; j--) {
                if (tabu[i][j] == 'o') {
                    food++;
                    if (food > max_food) {
                        max_food = food; // Atualiza o máximo de comida encontrado
                    }
                }
                else if (tabu[i][j] == 'A') {
                    food = 0;
                }
            }
        }
    }

    printf("%d\n", max_food);

    return 0;
}
