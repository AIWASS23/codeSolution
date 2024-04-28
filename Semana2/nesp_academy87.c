#include <stdio.h>

int main() {
    unsigned short posicao_P, posicao_R;
    scanf("%hu %hu", &posicao_P, &posicao_R);

    char caminho = (posicao_P == 0) ? 'C' : ((posicao_R == 0) ? 'B' : 'A');

    printf("%c\n", caminho);
    return 0;
}