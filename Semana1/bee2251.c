#include<stdio.h>

int main() {
    int t = 1;
    int n;
    
    while (scanf("%d", &n), n) {
        int result = 1;
        for (int i = 0; i < n; i++) {
            result <<= 1;
        }
        printf("Teste %d\n%d\n\n", t++, result - 1);
    }

    return 0;
}