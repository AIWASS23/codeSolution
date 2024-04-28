#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_N 1005
#define MAX_M 10005

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n, m;
    int a[MAX_N];
    int b[MAX_M];
    int c[MAX_M];

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    qsort(a, n, sizeof(int), compare);

    int pos = 0;
    
    for (int i = 0; i < m; i++) {
        int j = 0;
        while (j < n && a[j] < b[i]) {
            j++;
        }
        if (j == n || a[j] != b[i]) {
            c[pos] = b[i];
            pos++;
        }
    }

    qsort(b, m, sizeof(int), compare);

    bool ctl = true; 
    int x;

    for (int i = 0; i < pos; i++) {
        int k = c[i];
        int l = 0; int r = m - 1;
        bool aux = false;

        while (l < r) {
            if (b[l] + b[r] == k) {
                aux = true;
                break;
            }
            else if (b[l] + b[r] > k)
                r--;
            else
                l++;
        }

        if (!aux) {
            if (k % 2 == 0) {
                int w = 0;
                while (w < m && b[w] < k/2) {
                    w++;
                }
                if (w != m && b[w]*2 == k)
                    continue;
                else {
                    ctl = false;
                    x = k;
                    break;
                }
            }
            else {
                ctl = false;
                x = k;
                break;
            }
        }
    }

    if (ctl)
        printf("sim\n");
    else
        printf("%d\n", x);

    return 0;
}
