//
//  testunion.c
//  
//
//  Created by xiaobo on 2018/3/18.
//

#include <stdio.h>

union Test {
    int num;
    char str;
};

int main(void) {
    union Test test = {65};
    
    printf("%d\n", test.num);
    printf("%c\n", test.str);
    printf("num pointer is %p, and str pointer us %p\n", &test.num, &test.str);
    return 0;
}
