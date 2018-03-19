//
//  p15-4.c
//  
//
//  Created by xiaobo on 2018/3/17.
//
/*
#include <stdio.h>
#include <limits.h>
int showBit(int num, int pos);

int main(void){
    int num, pos;
    puts("please enter a number and the bit you want to show");
    while(scanf("%d%d", &num, &pos) == 2) {
        while(getchar() != '\n') {
            continue;
        }
        
        printf("pos %d is %d\n", pos, showBit(num, pos));
        puts("enter again");
    }
    return 0;
}

int showBit(int num, int pos){
    int len = sizeof(int) * CHAR_BIT;
    num >>= (len - pos);
    return num & 1;
}
 */



























