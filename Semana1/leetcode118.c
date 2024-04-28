#include <stdio.h>
#include <stdlib.h>

int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    int** ans = (int**)malloc(numRows * sizeof(int*));
    *returnSize = numRows;
    *returnColumnSizes = (int*)malloc(numRows * sizeof(int));

    for (int i = 0; i < numRows; i++) {
        ans[i] = (int*)malloc((i + 1) * sizeof(int));
        (*returnColumnSizes)[i] = i + 1;
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                ans[i][j] = 1;
            } else if (j - 1 >= 0) {
                ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
            }
        }
    }

    return ans;
}