#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "queue.h"
#define MIN_PER_HR 60

bool newcustomer(double x);
Item customertime(long when);

int main(void){
    Queue line;
    Item item; //当前顾客
    int hours; //计算多少时间
    int perhour; //每小时的顾客数量
    long cycle, cycleLimit;
    long turnaway = 0; //计算没排上队的
    long customers = 0; //被加入队列的顾客数量
    long servered = 0; //被服务的顾客数量
    long sum_line = 0; //当前队列长度
    long wait_time = 0; //当前到空闲时间
    double min_per_const; //顾客到来的平均间隔
    long line_wait; //顾客累计等待时间

    InitializeQueue(&line);
    srand(time(0)); // 初始化随机函数rand
    puts("please enter a number of simulate hour:");
    scanf("%d", &hours);
    cycleLimit = MIN_PER_HR * hours;
    puts("enter the averge number of customer per hour:");
    scanf("%d", &perhour);
    min_per_const = MIN_PER_HR/perhour;

    for(cycle = 0; cycle < cycleLimit; cycle++) {
        if(newcustomer(min_per_const)){
            if(QueueIsFull(&line)) {
                turnaway++;
            } else {
                item = customertime(cycle);
                EnQueue(item, &line);
                customers++;
            }
        }

        if(wait_time <= 0 && !QueueIsEmpty(&line)){
            DeQueue(&item, &line);
            servered++;
            line_wait += cycle-item.arrive;
            wait_time = item.processtime;
        }

        if(wait_time > 0){
            wait_time--;
        }

        sum_line += QueueCount(&line);
    }

    if(customers) {
        printf("customer accepted: %ld\n", customers);
        printf("customer service: %ld\n", servered);
        printf("turnaway: %ld\n", turnaway);
        printf("avarge queue size: %0.2f\n", (double) sum_line/cycleLimit);
        printf("avarge wating time: %0.2f\n", (double) line_wait/servered);
    } else {
        puts("no customer");
    }

    EmptyQueue(&line);
    puts("Bye!");
    return 0;

}

bool newcustomer(double x){
    if((rand() * x)/RAND_MAX < 1){
        return true;
    } else {
        return false;
    }
};

Item customertime(long when){
    Item item;
    item.processtime = rand() % 3 + 1;
    item.arrive = when;
    return item;
}