#pragma c9x on
#ifndef _QUEUE_H_
#define _QUEUE_H_
#include <stdbool.h>
#define MAXQUEUE 10

typedef struct item {
    long arrive;
    int processtime;
} Item;

typedef struct node {
    Item item;
    struct node * next;
} Node;

typedef struct queue {
    Node * front;
    Node * rear;
    unsigned int items;
} Queue;

//初始化队列
void InitializeQueue(Queue * pq);

//检测队列是否已经满
bool QueueIsFull(const Queue * pq);

//检测队列事都为空
bool QueueIsEmpty(const Queue * pq);

//队列的项目数
unsigned int QueueCount(const Queue * pq);

//像队列添加项目
bool EnQueue(Item item, Queue * pq);

//从首端删除项目
bool DeQueue(Item * temp, Queue * pq);

//清空队列
void EmptyQueue(Queue * pq);

#endif