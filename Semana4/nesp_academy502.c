#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int L, C;

bool way(int X, int Y, bool V[L + 2][C + 2]);

int main() {
    int A, B;
    scanf("%d%d%d%d", &L, &C, &A, &B);
    
    bool V[L + 2][C + 2];
    for (int i = 1; i <= L; i++) {
        for (int j = 1; j <= C; j++) {
            scanf("%d", &V[i][j]);
        }
    }

    way(A, B, V);

    return 0;
}

bool way(int X, int Y, bool V[L + 2][C + 2]) {
    V[X][Y] = 0;

    if (X == 1 || X == L || Y == 1 || Y == C) {
        printf("%d %d\n", X, Y);
        return true;
    }

    int dirs[4][2] = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

    for (int i = 0; i < 4; i++) {
        int newX = X + dirs[i][0];
        int newY = Y + dirs[i][1];
        if (V[newX][newY] == 1) {
            if (way(newX, newY, V)) {
                return true;
            }
        }
    }

    return false;
}
