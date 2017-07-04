#pragma once
#include "utils.h"

typedef struct LinkedListNode LinkedListNode;
struct LinkedListNode {
    void* data;
    LinkedListNode* prev;
    LinkedListNode* next;
};

typedef struct LinkedList LinkedList;
struct LinkedList {
    LinkedListNode* head;
    LinkedListNode* tail;
    Destructor* destroy;
};

void LinkedListConstruct(LinkedList* list, Destructor* destroy);
void LinkedListDestroy(LinkedList* list);

void LinkedListInsertBefore(LinkedListNode* node, void* data);
void LinkedListInsertAfter(LinkedListNode* node, void* data);
void LinkedListRemove(LinkedList* list, LinkedListNode* node);

void LinkedListSetItem(
    LinkedList* list,
    LinkedListNode* node,
    void* data
);
