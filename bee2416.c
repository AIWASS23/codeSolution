#include <stdio.h>

int main() {

    int a; 
    int b;
    int resposta;

    scanf("%d %d", &a, &b);
    resposta = a % b;

    printf("%d\n", resposta);
    return 0;
}