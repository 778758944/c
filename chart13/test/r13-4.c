//
//  r13-4.c
//  learnc
//
//  Created by xiaobo on 2017/12/11.
//  Copyright © 2017年 xiaobo. All rights reserved.
//
/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argv[]){
    FILE * fp;
    float a = 0;
    float total = 0;
    int i = 0;
    if(argc < 2){
        puts("please enter a float");
        while(scanf("%f", &a) == 1){
            total += a;
            i++;
        }
        
    } else {
        printf("%s\n", argv[1]);
        if((fp = fopen(argv[1], "r")) == NULL){
            exit(0);
        }
        
        while(fscanf(fp, "%f", &a) == 1) {
            i++;
            total += a;
        }
        
    }
    if(i > 0){
        printf("average is %.2f\n", total/i);
    } else {
        printf("no float\n");
    }
    return 0;
}
*/
