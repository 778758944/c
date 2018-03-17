//
//  p14-10.c
//  
//
//  Created by xiaobo on 2018/3/14.
//
/*
#include <stdio.h>
void func1(void);
void func2(void);
typedef void (* FUNCARR[2])(void);
int main(void){
    FUNCARR funcs = {
        func1,
        func2,
    };
    char * str = "dedefefe";
    printf("%c\n", str[0]);
    char opt;
    
    puts("enter you options");
    while(scanf("%c", &opt) == 1){
        switch(opt) {
            case 'a':
                funcs[0]();
                break;
            
            case 'b':
                funcs[1]();
                break;
        }
    }
}

void func1(void) {
    printf("a");
}

void func2(void) {
    printf("b");
}
*/

