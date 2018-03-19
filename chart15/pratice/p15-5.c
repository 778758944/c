//
//  p15-5.c
//  
//
//  Created by xiaobo on 2018/3/17.
//
/*
#include <stdio.h>
#include <limits.h>
#include <math.h>
unsigned int rotate(unsigned int, int);
int main(void) {
    unsigned int num;
    int pos;
    puts("enter the num and pos");
    while(scanf("%u%d", &num, &pos) == 2){
        while(getchar() != '\n'){
            continue;
        }
        printf("rotate %u by %d is %u", num, pos, rotate(num, pos));
    }
}

unsigned rotate(unsigned int num, int pos){
    unsigned int mask = pow(2, 31);
    unsigned int lastNum = 0;
    unsigned int temp = 0;
    int i;
    for(i = 0; i <= pos; i++){
        temp = num & mask;
        if (temp != 0) {
            lastNum <<= 1;
            lastNum |= 1;
        }
    }
    num <<= pos;
    return num | lastNum;
}
 */
























