//
//  p15-1.c
//  
//
//  Created by xiaobo on 2018/3/14.
//
/*
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>
int toInt(char *);
int main(void) {
    char arr[CHAR_BIT * sizeof(int) + 1];
    int res;
    puts("enter a binary");
    while(gets(arr) != NULL) {
        res = toInt(arr);
        printf("int is %d\n", res);
        puts("enter again");
    }
    
    return 0;
}

int toInt(char * arr){
    int len = (int)strlen(arr);
    int i, result = 0;
    for(i = 0; i < len; i++){
        result <<= 1;
        result |= (arr[i] == '0' ? 00 : 01);
    }
    return result;
}
*/


















