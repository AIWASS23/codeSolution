#include <stdio.h>

int main() {

    int quantidade;
    int resposta = 0;
    int temporario = 1;
    int anterior;
    int contador = 0;

    scanf("%d", &quantidade);

    while (contador < quantidade) {
        int entrada;
        scanf("%d", &entrada);
        
        if (anterior == entrada) {
            temporario++;
        } else {
            if (temporario > resposta) {
                resposta = temporario;
            }
            temporario = 1;
        }
        anterior = entrada;
        contador++;
    }
    if (temporario > resposta) {
        resposta = temporario;
    }
    printf("%d\n", resposta);
    return 0;
}