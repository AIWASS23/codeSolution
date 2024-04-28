#include <stdio.h>
#include <string.h>

int main() {
    char chave[26] = {0};
    char entrada[100000]; // Assumindo tamanho máximo da entrada
    fgets(chave, 27, stdin);
    getchar(); // Consumir o '\n'

    fgets(entrada, 100000, stdin);

    int tamanho = strlen(entrada);

    for (int i = 0; i < tamanho - 1; i++) { // tamanho - 1 para ignorar o '\n' da entrada
        char ch = entrada[i];
        if (ch >= 'a' && ch <= 'z') {
            putchar(chave[ch - 'a']);
        } else {
            putchar(ch); // Caso contrário, mantenha o caractere original
        }
    }

    putchar('\n');
    return 0;
}
