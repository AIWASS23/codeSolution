#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TABLE_SIZE 10007  // Um número primo para melhor dispersão

typedef struct Node {
    int key;
    struct Node* next;
} Node;

typedef struct {
    Node* table[TABLE_SIZE];
} Set;

unsigned int hash(int key) {
    return key % TABLE_SIZE;
}

void initSet(Set* set) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        set->table[i] = NULL;
    }
}

bool insert(Set* set, int value) {

    unsigned int index = hash(value);
    Node* newNode = (Node*)malloc(sizeof(Node));

    if (newNode == NULL) {
        return false;  // Falha na alocação
    }

    newNode->key = value;
    newNode->next = NULL;
    Node* current = set->table[index];
    
    while (current != NULL) {
        if (current->key == value) {
            free(newNode);
            return false;  // Valor já existe
        }
        current = current->next;
    }

    newNode->next = set->table[index];
    set->table[index] = newNode;

    return true;  // Inserção bem-sucedida
}

int main() {
    int casos;
    int temporaria;
    Set notas;
    initSet(&notas);

    scanf("%d", &casos);

    for (int i = 0; i < casos; i++) {
        scanf("%d", &temporaria);
        insert(&notas, temporaria);
    }

    int count = 0;

    for (int i = 0; i < TABLE_SIZE; i++) {
        Node* current = notas.table[i];
        while (current != NULL) {
            count++;
            current = current->next;
        }
    }

    printf("%d\n", count);

    // Libera a memória
    for (int i = 0; i < TABLE_SIZE; i++) {
        Node* current = notas.table[i];
        while (current != NULL) {
            Node* temp = current;
            current = current->next;
            free(temp);
        }
    }

    return 0;
}
