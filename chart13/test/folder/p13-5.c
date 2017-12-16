//
//  p13-5.c
//  learnc
//
//  Created by xiaobo on 2017/12/13.
//  Copyright © 2017年 xiaobo. All rights reserved.
//
/*
#include <stdio.h>
#include <stdlib.h>
#define SIZE 1024
void append(FILE * source, FILE * dest);
int main(int argc, char ** argv){
    FILE * f_app;
    FILE * f_source;
    if((f_app = fopen(argv[1], "a")) == NULL){
        printf("can not open file\n");
        exit(0);
    }
    //指定缓冲区可以减少向输出流输出的次数
    if(setvbuf(f_app, NULL, _IOFBF, SIZE) != 0) {
        exit(0);
    }
    
    if(argv[2][0] == '\0'){
        exit(0);
    }
    

    if((f_source = fopen(argv[2],"r")) == NULL){
        puts("can not open file");
        exit(0);
    }
    
    if(setvbuf(f_source, NULL, _IOFBF, SIZE) != 0){
        exit(0);
    }
    
    append(f_source, f_app);
    fclose(f_source);
    fclose(f_app);
    return 0;
}

void append(FILE * source, FILE * dest){
    size_t byte;
    char temp[SIZE];
    while((byte = fread(temp, sizeof(char), SIZE, source)) > 0){
        fwrite(temp, sizeof(char), byte, dest);
    }
}
 */
