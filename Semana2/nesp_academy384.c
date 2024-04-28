#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_SIZE 100000

int fila[MAX_SIZE];

int main() {
    int n, m;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int tmp;
        scanf("%d", &tmp);
        fila[i] = tmp;
    }

    scanf("%d", &m);

    bool remove[MAX_SIZE] = {false}; // Alterado para um vetor de booleanos para indicar quais elementos remover
    int elemento;
    for (int i = 0; i < m; i++) {
        scanf("%d", &elemento);
        remove[elemento] = true; // Marca o elemento como para remoção
    }

    bool espaco = true;
    for (int i = 0; i < n; i++) {
        if (!remove[fila[i]]) { // Verifica se o elemento atual não está marcado para remoção
            if (espaco) {
                printf("%d", fila[i]);
                espaco = false;
            } else {
                printf(" %d", fila[i]);
            }
        }
    }
    printf("\n");

    return 0;
}
