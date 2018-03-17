//
//  p13-8.c
//  learnc
//
//  Created by xiaobo on 2017/12/15.
//  Copyright © 2017年 xiaobo. All rights reserved.
//
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10
int main(int argc, char ** argv){
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int i;
    char ch;
    FILE * fp;
    char temp;
    if(argc < 2){
        puts("error");
        exit(0);
    }
    
    ch = *(argv[1]);
    for(i = 0; i < (argc - 2); i++){
        if((fp = fopen(argv[i+2], "r")) == NULL){
            puts("error to open file");
        } else {
            while((temp = getc(fp)) != EOF){
                if(temp == ch){
                    arr[i] += 1;
                }
            }
        }
    }
    
    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    return 0;
}
 */
