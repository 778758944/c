//
//  r13-2.c
//  learnc
//
//  Created by xiaobo on 2017/12/11.
//  Copyright © 2017年 xiaobo. All rights reserved.
//
/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char ** argv){
    char ch;
    FILE * fp;
    if (argc < 2){
        exit(2);
    }
    
    if((fp = fopen(argv[1], "r")) == NULL){
        exit(1);
    }
    
    while((ch = getc(fp)) != EOF){
        if(isdigit(ch)){
            putchar(ch);
        }
    }
    putchar('\n');
    fclose(fp);
    return 0;
}
 */
