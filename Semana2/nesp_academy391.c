#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int cont = 0;
    for (int c = 0; c < n - 1; c++) {
        if (nums[c] < m) {
            int dif = m - nums[c];
            nums[c] += dif;
            nums[c + 1] += dif;
            cont += dif;
        } else if (nums[c] > m) {
            int dif = nums[c] - m;
            nums[c] -= dif;
            nums[c + 1] -= dif;
            cont += dif;
        }
    }

    printf("%d\n", cont);

    return 0;
}
