#include <stdio.h>
#include "queue.h"

int main(void){
    Item temp;
    Queue pq;
    char ch;
    InitializeQueue(&pq);
    puts("type a to add ,type d to delete, type q to quit");
    while((ch = getchar()) != 'q'){
        if(ch != 'a' && ch != 'd'){
            continue;
        }

        if(ch == 'a'){
            if(QueueIsFull(&pq)){
                puts("queue is full");
            } else {
                puts("enter a number");
                scanf("%d", &temp);
                printf("add %d to queue\n", temp);
                EnQueue(temp, &pq);
            }
        } else {
            if(QueueIsEmpty(&pq)) {
                puts("queue is empty");
            } else {
                DeQueue(&temp, &pq);
                printf("delete is %d\n", temp);
                puts("delete first from queue");
            }
        }
        printf("queue item is %d \n", QueueCount(&pq));
        printf("please enter a, d or q\n");

    }
    EmptyQueue(&pq);
    puts("Bye!\n");
    return 0;
}