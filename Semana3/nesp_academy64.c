#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int N, B, r = 0, menor = 0;

    scanf("%d %d", &N, &B);

    int *nums = (int *)malloc(N * sizeof(int));

    for (int i = 0; i < N; ++i)
        scanf("%d", &nums[i]);

    qsort(nums, N, sizeof(int), compare);

    for (int i = N - 1; i >= menor; r++, --i)
        if (nums[i] + nums[menor] <= B)
            menor++;

    printf("%d\n", r);
    free(nums);
    return 0;
}