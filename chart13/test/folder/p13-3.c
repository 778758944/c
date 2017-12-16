//
//  p13-3.c
//  learnc
//
//  Created by xiaobo on 2017/12/13.
//  Copyright © 2017年 xiaobo. All rights reserved.
//
/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 100
int main(void){
    char toFile[SIZE];
    char sourceFile[SIZE];
    FILE * fa;
    FILE * fs;
    char temp;
    puts("please enter a source file name");
    if(gets(sourceFile)[0] == '\0'){
        printf("please enter again");
        exit(0);
    }
    
    puts("please enter a to file name");
    if(gets(toFile)[0] == '\0'){
        puts("please enter a right name");
        exit(0);
    }
    
    if(((fa = fopen(toFile, "w")) == NULL) || ((fs = fopen(sourceFile, "r")) == NULL)) {
        puts("can not open file");
        exit(0);
    }
    
    while((temp = getc(fs)) != EOF){
//        temp = getc(fs);
        putchar(temp);
        putc(toupper(temp), fa);
    }
    fclose(fa);
    fclose(fs);
    
    printf("done!");
    return 0;
}
 */
