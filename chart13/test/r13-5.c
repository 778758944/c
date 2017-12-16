//
//  r13-5.c
//  learnc
//
//  Created by xiaobo on 2017/12/11.
//  Copyright © 2017年 xiaobo. All rights reserved.
//
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 256
int main(int argc, char ** argv){
    FILE * fp;
    char str[MAX];
    if(argc < 3) {
        exit(2);
    }
    
    if((fp = fopen(argv[2], "r")) == NULL){
        exit(0);
    }
    
    while(fgets(str, MAX, fp) != NULL){
        if(strchr(str, *argv[1])) {
            printf("%s", str);
        }
    }
    
    return 0;
    
    
    
}
*/
