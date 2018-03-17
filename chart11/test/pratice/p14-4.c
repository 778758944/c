//
//  p14-4.c
//  
//
//  Created by xiaobo on 2018/3/8.
//
#include <stdio.h>
typedef struct name {
    char fname[10];
    char mname[10];
    char lname[10];
} NAME;


typedef struct person {
    char number[12];
    NAME name;
} PERSON;

int main(void) {
    PERSON persons[2] = {
        {
            "12345",
            {
                .fname="jack"
            }
        }
    }
}
























