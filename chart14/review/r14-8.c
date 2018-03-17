//
//  r14-8.c
//  
//
//  Created by xiaobo on 2018/3/6.
//

// 对比sizeof和strlen

#include <stdio.h>
#include <string.h>

struct car {
    char name[15];
    float mali;
    float zhouju;
    unsigned int year;
    unsigned int mpg;
}

int main(void){
    char str[10] = "demo";
    printf("sizeof %lu\n", sizeof(str));
    printf("strlen %lu\n", strlen(str));
    return 0;
}
