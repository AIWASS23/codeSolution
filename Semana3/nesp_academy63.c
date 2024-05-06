#include <stdio.h>
#include <stdlib.h>

#define MAX 1000010

int vetor[MAX]; 
int auxiliar[MAX];

long long int merge(int inicio, int meio, int fim) {

    int i = inicio;
    int j = meio + 1;
    int k = inicio;
    long long int inversoes = 0;
    
    while (i <= meio && j <= fim) {
        if (vetor[i] <= vetor[j]) {
            auxiliar[k++] = vetor[i++];
        } else {
            auxiliar[k++] = vetor[j++];
            inversoes += meio - i + 1; 
        }
    }
    
    while (i <= meio) {
        auxiliar[k++] = vetor[i++];
    }
    
    while (j <= fim) {
        auxiliar[k++] = vetor[j++];
    }
    
    for (int i = inicio; i <= fim; i++) {
        vetor[i] = auxiliar[i];
    }
    
    return inversoes;
}

long long int mergeSort(int inicio, int fim) {
    long long int inversoes = 0;
    if (inicio < fim) {
        int meio = (inicio + fim) / 2;
        inversoes += mergeSort(inicio, meio);
        inversoes += mergeSort(meio + 1, fim);
        inversoes += merge(inicio, meio, fim);
    }
    return inversoes;
}

int main() {
    int tamanho;
    scanf("%d", &tamanho);
    
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
    
    printf("%lld\n", mergeSort(0, tamanho - 1));
    
    return 0;
}
