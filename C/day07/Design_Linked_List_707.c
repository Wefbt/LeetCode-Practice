#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int val;
    struct MyLinkedList* next;
} MyLinkedList;


MyLinkedList* myLinkedListCreate() {
    MyLinkedList *head, *tail;
    head = (MyLinkedList*) malloc(sizeof(MyLinkedList));
    head -> next = NULL;
    return head;
}

int myLinkedListGet(MyLinkedList* obj, int index) {
    for (int i = 0; i <= index && obj != NULL; ++i) {
        obj = obj -> next;
        if (obj == NULL) return -1;
    }

    return obj -> val;
}

void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
    MyLinkedList* newList = (MyLinkedList*) malloc(sizeof(MyLinkedList));
    newList -> next = obj -> next;
    newList -> val = val;
    obj -> next = newList;
}

void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
    while(obj -> next != NULL) {
        obj = obj -> next;
    }

    MyLinkedList* newList = (MyLinkedList*) malloc(sizeof(MyLinkedList));
    newList -> next = NULL;
    newList -> val = val;
    obj -> next = newList;
}

void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
    for (int i = 0; i < index && obj != NULL; ++i) {
        obj = obj -> next;
        if (obj == NULL) return;
    }

    MyLinkedList* newList = (MyLinkedList*) malloc(sizeof(MyLinkedList));
    newList -> next = obj -> next;
    newList -> val = val;
    obj -> next = newList;
}

void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
    for (int i = 0; i < index && obj != NULL; ++i) {
        obj = obj -> next;
        if (obj == NULL) return;
    }

    MyLinkedList* delList = obj -> next;
    obj -> next = delList == NULL ? NULL : delList -> next;
    free(delList);
}

void myLinkedListFree(MyLinkedList* obj) {
    MyLinkedList *p,*q;
    p = obj;
    while (p -> next != NULL) {
        q = p -> next;
        p -> next = q -> next;
        free(q);
    }
    free(obj);
}

int main() {
    MyLinkedList *obj = myLinkedListCreate();
    myLinkedListAddAtHead(obj, 1);
    myLinkedListAddAtTail(obj, 3);
    myLinkedListAddAtIndex(obj, 1, 2);
    printf("%d\n", myLinkedListGet(obj, 1));
    myLinkedListDeleteAtIndex(obj, 1);
    printf("%d\n", myLinkedListGet(obj, 1));
    myLinkedListFree(obj);
    printf("%d", myLinkedListGet(obj, 0));
}
