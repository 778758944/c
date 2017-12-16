//
//  p13-2.c
//  learnc
//
//  Created by xiaobo on 2017/12/13.
//  Copyright © 2017年 xiaobo. All rights reserved.
//
/*
#include <stdio.h>
#include <stdlib.h>
#define SLEN 1024
#define FLEN 100
int main(int argc, char **argv){
    FILE * fa,
         * fs;
    char temp;
    
    if(argc < 3){
        puts("please enter two file please");
        exit(0);
    }
    if(((fa = fopen(argv[2], "wb")) == NULL) || ((fs = fopen(argv[1], "rb")) == NULL)) {
        puts("can not open file");
        exit(1);
    }
    while(!feof(fs)){
        fread(&temp, sizeof(char), 1, fs);
        fwrite(&temp, sizeof(char), 1, fa);
    }
    fclose(fs);
    fclose(fa);
    return 0;
}
 */
