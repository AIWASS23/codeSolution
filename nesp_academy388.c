#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

int main() {
    char letra;
    int qtde_palavras = 0, qtde_com_letra = 0;

    scanf(" %c", &letra); // Corrigindo para considerar espaços em branco antes da letra

    char palavra[MAX_LENGTH];

    while (scanf("%s", palavra) != EOF) {
        qtde_palavras++;
        int i;
        int palavra_tem_letra = 0; // Flag para indicar se a palavra contém a letra desejada
        for (i = 0; palavra[i] != '\0'; i++) {
            if (tolower(palavra[i]) == tolower(letra)) { // Convertendo ambas as letras para minúsculas para comparação insensível a maiúsculas/minúsculas
                palavra_tem_letra = 1;
                break; // Se encontrou a letra na palavra, não precisa continuar verificando
            }
        }
        if (palavra_tem_letra)
            qtde_com_letra++;
    }

    if (qtde_palavras != 0) { // Verifica se há palavras para evitar divisão por zero
        printf("%.1f\n", (float)qtde_com_letra / qtde_palavras * 100);
    } else {
        printf("0.0\n"); // Se não houver palavras, a porcentagem é zero
    }

    return 0;
}
