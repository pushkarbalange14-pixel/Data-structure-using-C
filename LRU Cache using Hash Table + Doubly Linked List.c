#include <stdio.h>
#include <stdlib.h>

#define HASH_SIZE 10

typedef struct Node
{
    int key;
    int value;
    struct Node *prev;
    struct Node *next;
    struct Node *hashNext;
} Node;

typedef struct
{
    int capacity;
    int size;
    Node *head;
    Node *tail;
    Node *hashTable[HASH_SIZE];
} LRUCache;

/* Hash function */
int hashFunction(int key)
{
    return key % HASH_SIZE;
}

/* Create a new node */
Node *createNode(int key, int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));

    newNode->key = key;
    newNode->value = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    newNode->hashNext = NULL;

    return newNode;
}

/* Search node in hash table */
Node *search(LRUCache *cache, int key)
{
    int index = hashFunction(key);
    Node *temp = cache->hashTable[index];

    while (temp != NULL)
    {
        if (temp->key == key)
            return temp;

        temp = temp->hashNext;
    }

    return NULL;
}

/* Remove node from hash table */
void removeFromHash(LRUCache *cache, Node *node)
{
    int index = hashFunction(node->key);
    Node *temp = cache->hashTable[index];
    Node *prev = NULL;

    while (temp != NULL)
    {
        if (temp == node)
        {
            if (prev == NULL)
                cache->hashTable[index] = temp->hashNext;
            else
                prev->hashNext = temp->hashNext;

            return;
        }

        prev = temp;
        temp = temp->hashNext;
    }
}

/* Insert node into hash table */
void insertIntoHash(LRUCache *cache, Node *node)
{
    int index = hashFunction(node->key);

    node->hashNext = cache->hashTable[index];
    cache->hashTable[index] = node;
}

/* Remove node from doubly linked list */
void removeFromList(LRUCache *cache, Node *node)
{
    if (node->prev != NULL)
        node->prev->next = node->next;
    else
        cache->head = node->next;

    if (node->next != NULL)
        node->next->prev = node->prev;
    else
        cache->tail = node->prev;

    node->prev = NULL;
    node->next = NULL;
}

/* Insert node at front */
void insertAtFront(LRUCache *cache, Node *node)
{
    node->next = cache->head;
    node->prev = NULL;

    if (cache->head != NULL)
        cache->head->prev = node;
    else
        cache->tail = node;

    cache->head = node;
}

/* Move node to front */
void moveToFront(LRUCache *cache, Node *node)
{
    removeFromList(cache, node);
    insertAtFront(cache, node);
}

/* Initialize cache */
LRUCache *createCache(int capacity)
{
    LRUCache *cache =
        (LRUCache *)malloc(sizeof(LRUCache));

    cache->capacity = capacity;
    cache->size = 0;
    cache->head = NULL;
    cache->tail = NULL;

    for (int i = 0; i < HASH_SIZE; i++)
        cache->hashTable[i] = NULL;

    return cache;
}

/* PUT operation */
void put(LRUCache *cache, int key, int value)
{
    Node *existing = search(cache, key);

    /* Key already exists */
    if (existing != NULL)
    {
        existing->value = value;
        moveToFront(cache, existing);

        printf("\nUpdated key %d with value %d\n",
               key, value);

        return;
    }

    /* Cache is full */
    if (cache->size == cache->capacity)
    {
        Node *LRU = cache->tail;

        printf("\nRemoving LRU key: %d\n",
               LRU->key);

        removeFromList(cache, LRU);
        removeFromHash(cache, LRU);

        free(LRU);

        cache->size--;
    }

    /* Create new node */
    Node *newNode = createNode(key, value);

    insertAtFront(cache, newNode);
    insertIntoHash(cache, newNode);

    cache->size++;

    printf("Inserted key %d with value %d\n",
           key, value);
}

/* GET operation */
int get(LRUCache *cache, int key)
{
    Node *node = search(cache, key);

    if (node == NULL)
    {
        printf("\nKey %d not found!\n", key);
        return -1;
    }

    moveToFront(cache, node);

    printf("\nKey = %d, Value = %d\n",
           key, node->value);

    return node->value;
}

/* Display cache */
void display(LRUCache *cache)
{
    Node *temp = cache->head;

    printf("\n================================\n");
    printf("       LRU CACHE\n");
    printf("================================\n");

    printf("MRU -> ");

    while (temp != NULL)
    {
        printf("[%d : %d]", temp->key, temp->value);

        if (temp->next != NULL)
            printf(" <-> ");

        temp = temp->next;
    }

    printf(" <- LRU\n");
}

/* Display hash table */
void displayHashTable(LRUCache *cache)
{
    printf("\n================================\n");
    printf("       HASH TABLE\n");
    printf("================================\n");

    for (int i = 0; i < HASH_SIZE; i++)
    {
        Node *temp = cache->hashTable[i];

        printf("[%d] -> ", i);

        while (temp != NULL)
        {
            printf("(%d,%d) -> ",
                   temp->key,
                   temp->value);

            temp = temp->hashNext;
        }

        printf("NULL\n");
    }
}

/* Free complete cache */
void destroyCache(LRUCache *cache)
{
    Node *temp = cache->head;

    while (temp != NULL)
    {
        Node *next = temp->next;
        free(temp);
        temp = next;
    }

    free(cache);
}

/* Main function */
int main()
{
    int capacity;
    int choice;
    int key, value;

    printf("Enter Cache Capacity: ");
    scanf("%d", &capacity);

    if (capacity <= 0)
    {
        printf("Invalid capacity!\n");
        return 0;
    }

    LRUCache *cache = createCache(capacity);

    while (1)
    {
        printf("\n\n========== MENU ==========\n");
        printf("1. PUT\n");
        printf("2. GET\n");
        printf("3. DISPLAY CACHE\n");
        printf("4. DISPLAY HASH TABLE\n");
        printf("5. EXIT\n");
        printf("===========================\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter key: ");
                scanf("%d", &key);

                printf("Enter value: ");
                scanf("%d", &value);

                put(cache, key, value);
                break;

            case 2:
                printf("Enter key: ");
                scanf("%d", &key);

                get(cache, key);
                break;

            case 3:
                display(cache);
                break;

            case 4:
                displayHashTable(cache);
                break;

            case 5:
                destroyCache(cache);

                printf("\nProgram terminated.\n");

                return 0;

            default:
                printf("\nInvalid choice!\n");
        }
    }

    return 0;
}
