#include <stdio.h>
#include <ctype.h>

int main() {
    char mensagem[1001];
    fgets(mensagem, sizeof(mensagem), stdin);

    for (int i = 0; mensagem[i] != '\0'; i++) {
        if (mensagem[i] == 'p' && isalpha(mensagem[i + 1])) {
            printf("%c", mensagem[i + 1]);
            i++; // Avança para o próximo caractere após o 'p'
        } else if (mensagem[i] != 'p') {
            printf("%c", mensagem[i]);
        }
    }

    return 0;
}
