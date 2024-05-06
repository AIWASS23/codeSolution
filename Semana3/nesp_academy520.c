#include <stdio.h>
#include <stdlib.h>

#define MAX 1010

typedef long long ll;

ll X[MAX], Y[MAX];
int adj[MAX][MAX];
int marked[MAX];

void dfs(int idx) {
    if (marked[idx]) {
        return;
    }
    marked[idx] = 1;
    for (int i = 0; i < MAX; i++) {
        if (adj[idx][i]) {
            dfs(i);
        }
    }
}

int main() {

    ll N, D;
    scanf("%lld %lld", &N, &D);
    D *= D;
    for (int i = 0; i < N; i++) {
        scanf("%lld %lld", &X[i], &Y[i]);
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if ((X[i] - X[j]) * (X[i] - X[j]) + (Y[i] - Y[j]) * (Y[i] - Y[j]) <= D) {
                adj[i][j] = 1;
                adj[j][i] = 1;
            }
        }
    }

    for (int i = 0; i < MAX; i++) {
        marked[i] = 0;
    }
    dfs(0);

    int ok = 1;

    for (int i = 0; i < N && ok; ok &= marked[i++]);

    printf("%s\n", (ok ? "S" : "N"));

    return 0;
}
