//
//  p15-3.c
//  
//
//  Created by xiaobo on 2018/3/17.
//
/*
#include <stdio.h>
#include <limits.h>
int getOpenBit(int);

int main(void) {
    int num;
    
    puts("enter a number");
    while(scanf("%d", &num) == 1){
        printf("num has %d bit open", getOpenBit(num));
        puts("enter again");
    }
    return 0;
}

int getOpenBit(int num) {
    int i, j = 0;
    int len = sizeof(int) * CHAR_BIT;
    for(i = 0; i < len; i++, num >>= 1){
        if ((num & 01) == 1){
            j++;
        }
    }
    
    return j;
}
*/
