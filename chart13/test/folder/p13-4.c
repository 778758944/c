//
//  p13-4.c
//  learnc
//
//  Created by xiaobo on 2017/12/13.
//  Copyright © 2017年 xiaobo. All rights reserved.
//
/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char ** argv){
    int i;
    FILE * fp;
    char temp;
    for(i = 1; i < argc; i++){
        if((fp = fopen(argv[i], "r")) == NULL){
            puts("fail to open file");
            exit(0);
        }
        printf("file %s\n", argv[i]);
        while((temp = getc(fp)) != EOF){
            putchar(temp);
        }
        printf("\n\n");
    }
    return 0;
}
 */
