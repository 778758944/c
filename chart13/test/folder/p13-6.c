//
//  p13-6.c
//  learnc
//
//  Created by xiaobo on 2017/12/14.
//  Copyright © 2017年 xiaobo. All rights reserved.
//
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
int main(void){
    FILE * in, * out;
    char filename[SIZE];
    char copyFile[SIZE];
    int count = 0;
    char temp;
    puts("please enter a file name");
    if (gets(filename)[0] == '\0') {
        puts("please enter a right name");
        exit(0);
    }
    
    if((in = fopen(filename, "r")) == NULL) {
        puts("can not open this file");
        exit(1);
    }
    
    strcpy(copyFile, filename);
    strcat(copyFile, ".red");
    
    if((out = fopen(copyFile, "w")) == NULL){
        puts("can not open this file");
        exit(2);
    }
    
    while((temp = getc(in)) != EOF){
        if(count++ % 3 == 0){
            putc(temp, out);
        }
    }
    
    fclose(in);
    fclose(out);
    
    printf("the compress file is %s\n", copyFile);
    return 0;
    
}
 */
