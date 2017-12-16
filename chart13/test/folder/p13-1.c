//
//  p13-1.c
//  learnc
//
//  Created by xiaobo on 2017/12/13.
//  Copyright © 2017年 xiaobo. All rights reserved.
//
/*
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main(void){
    int count = 0;
    FILE * fp;
    char filename[MAX];
    puts("please enter a file name");
    if(gets(filename)) {
        if((fp = fopen(filename, "r")) != NULL){
            while(getc(fp) != EOF){
                count++;
            }
        }else {
            printf("can not open this file");
            exit(0);
        }
    } else {
        puts("please enter a correct filename");
    }
    printf("%s has %d charaset\n", filename, count);
    return 0;
}
 */
