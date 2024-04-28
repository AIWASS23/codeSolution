#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);
    int v[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &v[i][j]);
        }
    }

    int sumcol, sumlin, sumdiag, rightSum = -1, diffcol, difflin = -1, sumdifflin;

    for (int i = 0; i < n; i++) {
        sumlin = sumcol = 0;
        for (int j = 0; j < n; j++) {
            sumlin += v[i][j];
            sumcol += v[j][i];
        }

        if (sumlin == sumcol && rightSum == -1) {
            rightSum = sumlin;
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        sumlin = sumcol = 0;
        for (int j = 0; j < n; j++) {
            sumlin += v[i][j];
            sumcol += v[j][i];
        }

        if (sumlin != rightSum) {
            difflin = i;
            sumdifflin = sumlin;
        }

        if (sumcol != rightSum) {
            diffcol = i;
        }
    }

    if (difflin != -1) {
        printf("%d %d\n", rightSum - (sumdifflin - v[difflin][diffcol]), v[difflin][diffcol]);
    } 
    return 0;  
}
