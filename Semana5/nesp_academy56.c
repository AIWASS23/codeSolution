#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 10000

int main() {
    int n;
    int topo = -1;
    scanf("%d", &n);
    getchar(); // Consumir o caractere de nova linha

    char ans = 'S';
    while (n--) {
        char pilha[MAX_SIZE];
        int topo = -1;

        char c;
        while ((c = getchar()) != '\n' && c != EOF) {
            if (c == '{') {
                pilha[++topo] = c;
            } else if (c == '}') {
                if (topo >= 0) {
                    topo--;
                } else {
                    ans = 'N';
                }
            }
        }
    }

    if (topo >= 0) {
        ans = 'N';
    }

    printf("%c\n", ans);

    return 0;
}
