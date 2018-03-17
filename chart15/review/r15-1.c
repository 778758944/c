//
//  r15-1.c
//  
//
//  Created by xiaobo on 2018/3/14.
//

#include <stdio.h>
#include <limits.h>
void tobin(int, char *);

int main(void){
    char arr[CHAR_BIT * sizeof(int) + 1];
    int num;
    puts("please enter a number");
    while(scanf("%d", &num) == 1){
        while(getchar() != '\n'){
            continue;
        }
        
        tobin(num, arr);
        printf("%s\n", arr);
    }
    return 0;
}

void tobin(int num, char * arr){
    int i;
    int size = CHAR_BIT * sizeof(int);
    for(i = size - 1; i >= 0; i--, num >>= 1){
        arr[i] = (01 & num) + '0';
    }
    
    arr[size] = '\0';
}
