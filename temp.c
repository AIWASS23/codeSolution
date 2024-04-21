#include <stdio.h>

int main() {
    int a, b, c, d, e;
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d", &d, &e);

    int max_abc = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    int min_abc = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    int max_de = (d > e) ? d : e;
    int min_de = (d < e) ? d : e;

    if (max_abc <= max_de && min_abc <= min_de) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}