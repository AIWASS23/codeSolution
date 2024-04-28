#include <stdio.h>

#define MAXN 510

int n, m;
int matriz[MAXN][MAXN];

int main() {
    int i, j;

    scanf("%d %d", &n, &m);

    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            scanf("%d", &matriz[i][j]);

    int menor_ant = -1, menor_atual;

    for (i = 1; i <= n; i++) {
        menor_atual = m + i;

        for (j = m; j >= 1; j--) {
            if (matriz[i][j] != 0)
                menor_atual = j;
        }

        if (menor_atual <= menor_ant) {
            printf("N\n");
            return 0;
        }
        menor_ant = menor_atual;
    }

    printf("S\n");

    return 0;
}
