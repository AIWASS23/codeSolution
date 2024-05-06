#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int tamanho;
    int contador = 0;

    scanf("%d", &tamanho);

    int *vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == 0) {
            for (int x = i; x < tamanho; x++) {
                if (vetor[x] != 0) {
                    contador++;
                    vetor[x] = (vetor[x] == -1) ? ((contador > 9) ? 9 : contador) : ((contador > vetor[x]) ? vetor[x] : contador);
                } else {
                    contador = 0;
                }
            }
        }
    }

    contador = 0;

    for (int i = tamanho - 1; i >= 0; i--) {
        if (vetor[i] == 0) {
            for (int a = i; a >= 0; a--) {
                if (vetor[a] != 0) {
                    contador++;
                    vetor[a] = (vetor[a] == -1) ? ((contador > 9) ? 9 : contador) : ((contador > vetor[a]) ? vetor[a] : contador);
                } else {
                    contador = 0;
                }
            }
        }
    }

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    free(vetor);

    return 0;
}
