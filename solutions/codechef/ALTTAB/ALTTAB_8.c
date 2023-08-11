// DATE: 11/08/2023, 03:20:23
// PROBLEM NAME: Alt-Tab
// PROBLEM URL: https://www.codechef.com/problems/ALTTAB
// PROBLEM DIFFICULTY RATTING: 1396
// STATUS: accepted
// TIME: 0.40
// MEMORY: 7.9M

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 40000

typedef struct Node {
    char* key;
    char* value;
    struct Node* next;
} Node;

typedef struct HashTable {
    Node* table[TABLE_SIZE];
} HashTable;

unsigned int hash(const char* key) {
    unsigned int hash = 0;
    for (int i = 0; key[i] != '\0'; ++i) {
        hash = (hash * 8) + key[i];
    }
    return hash % TABLE_SIZE;
}

void initHashTable(HashTable* ht) {
    for (int i = 0; i < TABLE_SIZE; ++i) {
        ht->table[i] = NULL;
    }
}

void insert(HashTable* ht, const char* key, const char* value) {
    unsigned int index = hash(key);
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->key = strdup(key);
    newNode->value = strdup(value);
    newNode->next = ht->table[index];
    ht->table[index] = newNode;
}

const char* find(HashTable* ht, const char* key) {
    unsigned int index = hash(key);
    Node* current = ht->table[index];
    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            return current->value;
        }
        current = current->next;
    }
    return NULL;
}

int main() {
    HashTable ht;
    initHashTable(&ht);

    int n, program_length;
    scanf("%d", &n);
    char programs[n][46];
    const char* name;

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

    return 0;
}


