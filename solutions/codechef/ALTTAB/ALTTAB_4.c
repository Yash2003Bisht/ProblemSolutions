// DATE: 11/08/2023, 03:26:00
// PROBLEM NAME: Alt-Tab
// PROBLEM URL: https://www.codechef.com/problems/ALTTAB
// PROBLEM DIFFICULTY RATTING: 1396
// STATUS: accepted
// TIME: 0.01
// MEMORY: 7.8M

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char* key;
    char* value;
    struct Node* next;
} Node;

typedef struct HashTable {
    int table_size;
    Node** table;
} HashTable;

unsigned int hash(const char* key, int table_size) {
    unsigned int hash = 0;
    for (int i = 0; key[i] != '\0'; ++i) {
        hash = (hash * 31) + key[i];
    }
    return hash % table_size;
}

void initHashTable(HashTable* ht, int table_size) {
    ht->table_size = table_size;
    ht->table = (Node**)malloc(sizeof(Node*) * table_size);
    for (int i = 0; i < table_size; ++i) {
        ht->table[i] = NULL;
    }
}

void insert(HashTable* ht, const char* key, const char* value) {
    unsigned int index = hash(key, ht->table_size);
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->key = strdup(key);
    newNode->value = strdup(value);
    newNode->next = ht->table[index];
    ht->table[index] = newNode;
}

const char* find(HashTable* ht, const char* key) {
    unsigned int index = hash(key, ht->table_size);
    Node* current = ht->table[index];
    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            return current->value;
        }
        current = current->next;
    }
    return NULL;
}

void cleanupHashTable(HashTable* ht) {
    for (int i = 0; i < ht->table_size; ++i) {
        Node* current = ht->table[i];
        while (current != NULL) {
            Node* temp = current;
            current = current->next;
            free(temp->key);
            free(temp->value);
            free(temp);
        }
    }
    free(ht->table);
}

int main() {
    int n, program_length;
    scanf("%d", &n);
    char programs[n][46];
    const char* name;


    HashTable ht;
    initHashTable(&ht, n);

    for (int i=0; i<n; i++)
        scanf("%s", programs[i]);

    for (int i=n-1; i>=0; i--){
        name = find(&ht, programs[i]);

        if (!name){
            insert(&ht, programs[i], "1");
            program_length = strlen(programs[i]);
            printf("%c%c", programs[i][program_length-2], programs[i][program_length-1]);
        }
    }

    cleanupHashTable(&ht);

    return 0;
}


