//
//  p13-7.c
//  learnc
//
//  Created by xiaobo on 2017/12/14.
//  Copyright © 2017年 xiaobo. All rights reserved.
//
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 1024
int main(int argc, char ** argv){
    FILE * fp1, *fp2;
    char temp[SIZE];
    char tem;
    char temp2[SIZE];
    if(argc < 3){
        printf("Usage: %s file1 file2", argv[0]);
        exit(0);
    }
    
    if((fp1 = fopen(argv[1], "r")) == NULL) {
        printf("can not open %s", argv[1]);
        exit(1);
    }
    
    if((fp2 = fopen(argv[2], "r")) == NULL) {
        printf("can not open %s", argv[2]);
        exit(1);
    }
    
    while(!feof(fp1) || !feof(fp2)){
        fgets(temp, SIZE, fp1);
        fgets(temp2, SIZE, fp2);
        if(!feof(fp1) && !feof(fp2)) {
            *(strchr(temp, '\n')) = '\0';
            strcat(temp, temp2);
            printf("%s", temp);
        } else if(!feof(fp1)){
            printf("%s", temp);
        } else if(!feof(fp2)){
            printf("%s", temp2);
        };
    }
    
    //最近一次输入调用检测到eof才返回true
//    printf("\n%d\n", feof(fp1));
    
    fclose(fp1);
    fclose(fp2);
    
    return 0;
}
 */
