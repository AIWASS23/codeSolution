#include <stdio.h>

int main() {
    unsigned short posicao_porta1, orientacao_porta1, posicao_porta2, orientacao_porta2;
    scanf("%hu%hu%hu%hu", &posicao_porta1, &orientacao_porta1, &posicao_porta2, &orientacao_porta2);
    
    // Ajustando a posição da porta de acordo com sua orientação
    posicao_porta1 *= orientacao_porta1;
    posicao_porta2 *= orientacao_porta2;

    // Verificando a relação entre as posições das portinhas
    if (posicao_porta1 == posicao_porta2)
        putchar('0');
    else if (posicao_porta2 > posicao_porta1)
        putchar('1');
    else
        printf("-1");
    
    putchar('\n');
    return 0;
}
