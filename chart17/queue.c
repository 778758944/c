#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

static void CopyToNode(Item item, Node * node);
static void CopyToItem(Node * node, Item * item);

void InitializeQueue(Queue * pq){
    pq->front = NULL;
    pq->rear = NULL;
    pq->items = 0;
};

bool QueueIsFull(const Queue * pq){
    return pq->items == MAXQUEUE;
};

bool QueueIsEmpty(const Queue * pq){
    return pq->items == 0;
};

unsigned int QueueCount(const Queue * pq){
    return pq->items;
};

bool EnQueue(Item item, Queue * pq){
    if (pq->items == MAXQUEUE) {
        return false;
    }
    Node * pnew;
    pnew = (Node *) malloc(sizeof(Node));

    if(pnew == NULL){
        fprintf(stderr, "can not malloc memory");
        exit(1);
    }

    CopyToNode(item, pnew);
    pnew->next = NULL;

    if(QueueIsEmpty(pq)){
        pq->front = pnew;
    } else {
        pq->rear->next = pnew;
    }
    pq->rear = pnew;
    pq->items++;
    return true;
}

bool DeQueue(Item * temp ,Queue * pq){
    if(QueueIsEmpty(pq)){
        return false;
    }
    Node * pt;
    pt = pq->front;
    CopyToItem(pt, temp);
    pq->front = pt->next;
    free(pt);
    pq->items--;
    if(pq->items == 0){
        pq->rear = NULL;
    }
    return true;

}

void EmptyQueue(Queue * pq) {
    Node * pt;
    Item * temp;
    pt = pq->front;
    while(!QueueIsEmpty(pq)){
        DeQueue(temp, pq);
    }
}

void CopyToNode(Item item, Node * node){
    node->item = item;
}

void CopyToItem(Node * node, Item * item){
    *item = node->item;
}

