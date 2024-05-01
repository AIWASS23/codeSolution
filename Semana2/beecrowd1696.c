#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tamanho;
int consulta;
int numero[100019]; 
int arvore[400031];

int contruir(int no, int inicial, int final) {
    if (inicial == final) {
        arvore[no] = numero[inicial];
        return 1;
    }
    int esquerdo = no * 2;
    int direito = esquerdo + 1;
    int meio = (inicial + final) / 2;

    int filhoEsq = contruir(esquerdo, inicial, meio);
    int filhoDir = contruir(direito, meio + 1, final);
    int operacao = (filhoEsq & filhoDir);

    if (operacao) {
        arvore[no] = arvore[esquerdo] + arvore[direito];
    } else {
        arvore[no] = arvore[esquerdo] - arvore[direito];
    }
    return operacao ^ 1;
}

int atualizar(int no, int inicial, int final, int indice, int novoValor) {
    if (inicial > indice || final < indice) {
        return 1;
    }
    if (inicial == final) {
        arvore[no] = novoValor;
        return 1;
    }
    int esquerdo = no * 2; 
    int direito = esquerdo + 1; 
    int meio = (inicial + final) / 2;

    int filhoEsq = atualizar(esquerdo, inicial, meio, indice, novoValor);
    int filhoDir = atualizar(direito, meio + 1, final, indice, novoValor);
    int operacao = (filhoEsq & filhoDir);

    if (operacao) {
        arvore[no] = arvore[esquerdo] + arvore[direito];
    } else {
         arvore[no] = arvore[esquerdo] - arvore[direito];
    }
    return operacao ^ 1;
}

typedef struct {
    int vetor[100019];
    int tabela[100019];
    int tamanho;
} Conjunto;

void inicializar(Conjunto *conjunto) {
    conjunto -> tamanho = 0;
    memset(conjunto->tabela, 0, sizeof(conjunto->tabela));
}

int contar(Conjunto *conjunto, int x) {
    return conjunto->tabela[x];
}

void inserir(Conjunto *conjunto, int x) {
    if (!conjunto->tabela[x]) {
        conjunto->vetor[conjunto->tamanho++] = x;
        conjunto->tabela[x] = 1;
    }
}

int main() {
    Conjunto conjunto;
    inicializar(&conjunto);
    int potencia = 1;

    while (potencia < 100000) {
        inserir(&conjunto, potencia);
        potencia *= 2;
    }

    const char *nomes[] = {"Rusa", "Sanches"};

    int teste;
    scanf("%d", &teste);
    int x;
    int y;
    int op = 1;

    while (teste--) {
        scanf("%d %d", &tamanho, &consulta);
        for (int i = 0; i < tamanho; i++) {
            scanf("%d", &numero[i]);
        }
        while (!contar(&conjunto, tamanho)) {
            numero[tamanho] = 0;
            tamanho++;
        }

        contruir(1, 0, tamanho - 1);

        for (int z = 0; z < consulta + 1; z++) {
            int val = arvore[1];
            printf("%d %s\n", val, (val % 2 != 0 ? nomes[op ^ 1] : nomes[op]));

            if (z < consulta) {
                scanf("%d %d", &x, &y);
                x--;
                atualizar(1, 0, tamanho - 1, x, y);
            }
        }
        op ^= 1;
    }
    return 0;
}
