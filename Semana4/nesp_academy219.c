#include <stdio.h>

int main() {
    int vetor[4];
    int resposta;
    
    for (int i = 0; i < 4; i++)
        scanf("%d", &vetor[i]);
    
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (vetor[i] > vetor[j]) {
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
    
    resposta = vetor[0];
    
    for (int i = 1; i < 4; i++)
        resposta += vetor[i] - 1;
        
    printf("%d\n", resposta);

    return 0;
}
