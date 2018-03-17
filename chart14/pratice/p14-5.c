//
//  p14-5.c
//  
//
//  Created by xiaobo on 2018/3/8.
//

#include <stdio.h>

struct name {
    char fname[10];
    char lname[10];
};

typedef struct student {
    struct name name;
    float grade[3];
    float average;
} STUDENT;

int main(void) {
    STUDENT arr[2] = {};
    return 0;
}
