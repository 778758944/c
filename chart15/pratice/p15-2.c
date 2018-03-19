//
//  p15-2.c
//  
//
//  Created by xiaobo on 2018/3/15.
//
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
int toInt(char *);
void toBin(int, char *);
int main(int argc, char *argv[]){
    int a, b;
    char str[sizeof(int) * CHAR_BIT + 1];
    if(argc < 3){
        puts("please enter to binary at least");
        exit(0);
    }
    
    a = toInt(argv[1]);
    b = toInt(argv[2]);
    
    
    toBin(~a, str);
    printf("~argv[1] is %s\n", str);
    
    toBin(~b, str);
    printf("~argv[2] is %s\n", str);
    
    return 0;
    
    
    
    
}

int toInt(char * arr){
    int i, result = 0;
    int len = (int) strlen(arr);
    for(i = 0; i < len; i++){
        result <<= 1;
        result |= (arr[i] == '0' ? 0 : 1);
    }
    return result;
}

void toBin(int num, char * str){
    //char arr[sizeof(int) * CHAR_BIT + 1];
    int i;
    int len = sizeof(int) * CHAR_BIT;
    for(i = len-1; i >= 0; i--, num >>= 1){
        str[i] = (num & 01) + '0';
    }
    str[len] = '\0';
}
 */












