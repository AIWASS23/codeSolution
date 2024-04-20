#include <stdio.h>

int main() {

    int resposta = 0;

    while (1) {
        int numeros;
        scanf("%d", &numeros);
        if (numeros == 0) {
            break;
        } else if (numeros > resposta) {
            resposta = numeros;
        }
    }
    printf("%d\n", resposta);
    return 0;
}