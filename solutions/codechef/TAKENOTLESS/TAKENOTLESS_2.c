// DATE: 19/08/2023, 08:17:35
// PROBLEM NAME: Take Not Less
// PROBLEM URL: https://www.codechef.com/problems/TAKENOTLESS
// PROBLEM DIFFICULTY RATTING: 1432
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.4M

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    int key;
    int value;
    struct Node* next;
} Node;

typedef struct HashTable {
    int table_size;
    Node** table;
} HashTable;

unsigned int hash(int key, int table_size) {
    return (unsigned int)(key % table_size);
}

void initHashTable(HashTable* ht, int table_size) {
    ht->table_size = table_size;
    ht->table = (Node**)malloc(sizeof(Node*) * table_size);
    for (int i = 0; i < table_size; ++i) {
        ht->table[i] = NULL;
    }
}

void insert(HashTable* ht, int key, int value) {
    unsigned int index = hash(key, ht->table_size);
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->key = key;
    newNode->value = value;
    newNode->next = ht->table[index];
    ht->table[index] = newNode;
}

int find(HashTable* ht, int key) {
    unsigned int index = hash(key, ht->table_size);
    Node* current = ht->table[index];
    while (current != NULL) {
        if (current->key == key) {
            return current->value;
        }
        current = current->next;
    }
    return -1;
}

void cleanupHashTable(HashTable* ht) {
    for (int i = 0; i < ht->table_size; ++i) {
        Node* current = ht->table[i];
        while (current != NULL) {
            Node* temp = current;
            current = current->next;
            free(temp);
        }
    }
    free(ht->table);
}

int main(void) {
    int t, n, winner, pile;
    scanf("%d", &t);
    
    
    while(t--){
        scanf("%d", &n);
        int a[n], value;

        HashTable ht;
        initHashTable(&ht, n);
        
        for (int i=0; i<n; i++)
            scanf("%d", &a[i]);

        winner = 0;

        for (int i=0; i<n; i++){
            value = find(&ht, a[i]);
            if (value == -1)
                insert(&ht, a[i], 1);
            else
                insert(&ht, a[i], ++value);
        }

        for (int i=0; i<n; i++){
            value = find(&ht, a[i]);
            if (value%2 != 0){
                winner = 1;
                break;
            }
        }

        if (winner)
            printf("Marichka\n");
        else
            printf("Zenyk\n");
            
        cleanupHashTable(&ht);

    }
    
	return 0;
}

