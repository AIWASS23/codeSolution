#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_MAXIMO 200001

typedef struct no {
	char letra;
	long long int proximo;
} No;

int main() {
	No indice[TAMANHO_MAXIMO];
	long long int quantidade;

	scanf("%lld", &quantidade);
	
	long long int inicio, fim;
	char caractere;

	for(int i = 0; i < quantidade; i++) {
		scanf("%lld %c %lld", &inicio, &caractere, &fim);
		indice[inicio].letra = caractere;
		indice[inicio].proximo = fim;
	}
	
	long long int i;
	for(i = 0; indice[i].proximo != 1; i = indice[i].proximo) {
		printf("%c", indice[i].letra);
    }
	printf("%c", indice[i].letra);
	return 0;
}
